#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertNode(struct Node** newHead, int newData)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=(*newHead);
    (newHead)=newHead;
}

void insertNodeInList(struct Node* prevNode, int newData)
{
    if(prevNode==NULL)
    {
        printf("the given previous node cannot be NULL");
        return -1;
        EXIT_FAILURE;
    }
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=newData;
    newNode->next=prevNode->next;
    prevNode->next=newNode;

}
