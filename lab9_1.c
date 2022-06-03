#include <stdio.h>

int isSortedgr(unsigned v[],unsigned n)
{
    int i;
    int ok=1;
    for(i=0;i<n;i++)
    {
	if(v[i]>v[i+1])
	ok=0;
    }
    return ok;

}
int isSortdecr(unsigned v1[],unsigned n)
{
    int i;
    int ok=1;
    for(i=0;i<n;i++)
    {
	if(v1[i]<v1[i+1])
	    ok=0;
    }
    return ok;
}

int main()
{
    int x,n,x1;
    int v[]={1,2,3,4,4};
    int v1[]={5,3,3,1,1};
    x=isSortedgr(v,5);
    x1=isSortdecr(v1,5);
    printf("%d",x);
    printf("\n");
    printf("%d",x1);
    printf("\n");
    printf("\n");
    return 0;
}