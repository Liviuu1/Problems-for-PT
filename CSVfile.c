#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personsData{
    int year;
    char name[1024];
}pers;

struct Node{
    pers data;
    struct Node* next;
};

struct Node* h_boys=NULL, *p_boys=NULL, *h_girls=NULL, *p_girls=NULL;

void sortedInsert(struct Node** head, struct Node* newNode)
{

    if(*head==NULL || (strcmp((*head)->data.name,newNode->data.name)>=0))
    {
        newNode->next=*head;
        *head=newNode;
        return ;
    }
    struct Node* current= *head;
    while(current->next!=NULL && (strcmp(current->next->data.name,newNode->data.name)<0))
    {
        current=current->next;
    }
    newNode->next=current->next;
    current->next=newNode;

}

void makeFile(FILE *fo, struct node ** head)
{
    struct Node *temp= *head;
    while(temp!=NULL)
    {
        fprint(fo,"%s - %d",temp->data.name, temp->data.year);
        temp=temp->next;
    }

}

void readFile(FILE *f)
{
    char gender;
    int year_aux;
    char name_aux[1024];
    char extra[1024];
    while(fscanf(f,"%d,%c,%[^,]",&year_aux,&gender,&name_aux)==3)
    {
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        fgets(extra,1023,f);
        if(gender=='G')
        {
            newnode->data.year=year_aux;
            strcpy(newnode->data.name,name_aux);
            newnode->next=NULL;
            sortedInsert(&h_boys,newnode);
        }
    }
}

int main(int argc, char **argv)
{
    if(argc<4)
    {
        printf("Not enough input arguments \n");
        return -1;
        EXIT_FAILURE;
    }
    FILE *f=fopen(argv[1],"r");
    if(!f)
    {
        return -1;
        EXIT_FAILURE;
    }
    readFile(f);
    FILE *fo=fopen(argv[2],"w");
    if(!fo)
    {
        printf("Error creating the file %s ", argv[2]);
        return -1;
        EXIT_FAILURE;
    }
    FILE *fo1=fopen(argv[3],"w");
    if(!fo1)
    {
        printf("Error creating this file %s ",argv[3]);
        return -1;
        EXIT_FAILURE;
    }

    makeFile(fo,&h_boys);
    makeFile(fo1,&h_girls);
}