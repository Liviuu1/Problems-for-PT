#include <stdio.h>

int readNum(int v[],int pos,int capacity)
{
    int nr;
    while(scanf("%d",&nr)!=0)
    {
	if(pos>=capacity)
	    return -1;
	if(nr==0)
	    return pos;
	if(nr<=0)
	{
	    v[pos]=nr;
	    pos++;
	}
    }
    v[pos+1]='\0';
    return pos;

}

int main()
{
    int pos=0;
    int v[3]={};
    int capacity=sizeof(v)/sizeof(v[0]);
    int x=readNum(v,pos,capacity);
    if(x==-1)
    {
	printf("buffer overflow\n");
    }
    else
	{
	    for(int i=0;i<x;i++)
	    printf("%d ",v[i]);
	}
    printf("\n");
    
    return 0;



}