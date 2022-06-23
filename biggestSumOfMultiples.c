#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int max=0;

struct node{
	int x[20];
	struct node* next;
};

struct node* head=NULL;

void disp(int x[],int n){
	for(int i=1;i<=n;i++){
		printf("%d",x[i]);
	}
	printf("\n");
}

void free_list(){
	struct node* temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}
}

bool valid(int x[],int k){
	for(int i=1;i<k;++i){
		if(x[k]==x[i])
			return false;
	}
	return true;
}

void add_node(int n,int x[]){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	for(int i=1;i<=n;i++){
		temp->x[i]=x[i];
	}
	temp->next=head;
	head=temp;
}

bool solution(int x[],int k,int n){

	int local_max=0;
	if(k==n)
	{
		for(int i=1;i<n;i++){
			local_max+=x[i]*x[i+1];
		}
		local_max+=x[1]*x[n];
		if(max<local_max)
		{
			max=local_max;
			free_list();
			add_node(n,x);
		}
		else if(max==local_max){
			add_node(n,x);
		}
		return true;
	}
	return false;
}

void back(int x[],int k,int n){
	for(int i=1;i<=n;i++){
		x[k]=i;
		if(valid(x,k)){
			if(solution(x,k,n)){
				//disp(x,n);
			}
			else
				back(x,k+1,n);
		}
	}

}

void printlist(int n){
	FILE* f=fopen("output.txt","w");
	if(!f)
		return;
	struct node* temp=head;
	while(temp!=NULL){
		for(int i=1;i<n;i++)
			fprintf(f,"%d-",temp->x[i]);

		fprintf(f,"%d\n",temp->x[n]);
		temp=temp->next;
	}
}

int main(){
	FILE* f=fopen("input.txt","r");
	if(!f)
		return -1;
	int n;
	if(fscanf(f,"%d",&n)!=1)
	{
		printf("NOTHING READ");
		return -1;
	}
	int x[20]={0};
	back(x,1,n);
	//printf("\nMax is  : %d\n",max);
	printlist(n);
	return 0;
}