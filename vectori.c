#include <stdio.h>

void verificareVect(int v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
	if(v[i]<v[i+1])
	    printf("crescator\n");
	if(v[i]>v[i+1])
	    printf("descrescator\n");
    for(i=0;i<n/2;i++)
    {
	if(v[i]<v[i+1])
	for(i=n/2;i<n;i++)
	{
	    if(v[i]>v[i+1])
	    printf("deal\n");
	    else if(v[i]<v[i+1])
	    printf("crescator\n");
	}
	if(v[i]>v[i+1])
	for(i=n/2;i<n;i++)
	{
	    if(v[i]<v[i+1])
	    printf("vale\n");
	    else if(v[i]>v[i+1])
	    printf("descrescator\n");
	}
    }
}
}

int main()
{
    int n=5;
    int v[]={3,12,50,73,-1};
    verificareVect(v,n);
    return 0;
}
