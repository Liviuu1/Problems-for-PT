#include <stdio.h>
#include <stdlib.h>

struct Node{
        int data;
        struct Node* next;
};

struct Node *last=NULL;
int k;

void bubble_sort_file(FILE* f)
{
    fseek(f,0,SEEK_CUR);
    fseek(f,0,SEEK_END);
    int len=ftell(f)/sizeof(int);
    int aux,aux1;
    rewind(f);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
                fread(&aux,sizeof(int),1,f);
                fread(&aux1,sizeof(int),1,f);
                printf("%d and %d/n",aux, aux1);
                if(aux<aux1)
                {
                    fseek(f,-sizeof(int)*2,SEEK_CUR);
                    fwrite(&aux1,sizeof(int),1,f);
                    fwrite(&aux,sizeof(int),1,f);
                    fseek(f,-sizeof(int),SEEK_CUR);
                }
        }
    }
}

void printList()
{
    struct Node* temp;
    temp=last->next;
    printf("Printing the list : \n");
    do{
        printf("\n(%d)",temp->data);
        temp=temp->next;                                                                            
    }while(temp!=last->next);

}

void Insert(int data)
{
    k++;
    struct Node* link=(struct Node*)malloc(sizeof(struct Node));
    if(!link)
    {
        return EXIT_FAILURE;
    }
    link->data=data;
    if(last==NULL)
    {
        link->data=data;
        link->next=link;
        link=link;
    }
    else
    {
        link->data=data;
        link->next=last->next;
        last->next=link;
    }
}

void readFile(FILE *f)
{
    int temp;
    while(fread(&temp,1,sizeof(int),f))
    {
        if(temp)
        {
            printf("%d\n",temp);
            insert(temp);
        }
    }
}

void choose_random()
{
    int random;
    printf("Choosing a random to print the file : rand_node.bin ");
    FILE *fo=fopen("rand_node.bin","wb");
    if(!fo)
    {
        return ;
    }
    do{
        random=rand()%10;
    }while(random>k);
    printf("%d\n",random);
    struct Node* temp1;
    temp1=last->next;
    int count=0;
    do{

        if(count==random)
        {
            fwrite(&temp1->data,1,sizeof(int),fo);
        }
        count++;
        temp1=temp1->next;
    }while(temp1!=last->next);


}

int main(int argc, int *argv[])
{
    if(argc<2)
    {
        return -1;
    }
    FILE *f=fopen(argv[1],"rb");
    if(!f)
    {
        printf("File not able to open \n");
        return -1;
    }
    readFile(f);
    choose_random();
    printList();
    bubble_sort_file();
    return 0;
}