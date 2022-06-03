#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void pseudoSort(int v[],int length)
{
    int k;
    int aux;
    int l=length;
    while(length>1)
    {
	for(int i=0;i<length/2;i++)
	{
	    aux=v[i];
	    v[i]=v[length-i-1];
	    v[length-i-1]=aux;
	}
	length=length/2;
    }
    int length1=l;
    while(l>1)
    {
	l=l/2;
	k=0;
	for(int i=l+1;i<2*l;i++)
	{
	    aux=v[i];
	    v[i]=v[2*l-k];
	    v[2*l-k]=aux;
	    k++;
	}
    }
    v[length1]='\0';
    for(int i=0;v[i]!='\0';i++)
    {
	if(i)
	{
	    printf(",%d",v[i]);
	}
	else
	    {
		printf("%d",v[i]);
	    }
    }
    printf("\n");
}
int main()
{
    int length=5;
    int v[5]={1,2,3,4,5};
    pseudoSort(v,length);


}