#include <stdio.h>
/*void swapvalues(int v[],int n)
{
    int l=n;
    int aux;
    int aux1;
    for(int i=0;i<n/2;i++)
    {
	aux=v[i];
	v[i]=v[n-i-1];
	v[n-i-1]=aux;
    printf("%d",v[i]);
    }
    for(int i=0;i<n/2;i++)
    {
	aux1=v[i];
	v[i]=v[n-i-1];
	v[n-i-1]=aux1;
    printf("%d\n",v[i]);
    }
    

}

int main()
{
    int n=4;
    int v[4]={1,2,3,4};
    swapvalues(v,n);
    return 0;
}*/
void copyArr(int n, int v[], int m, int w[])
{	
    if(m==n)
    {
	for(int i=0;i<n;i++)
        {
	    w[i]=v[i];
	    printf("%d",w[i]); 
        }
	printf("\n");
    }
    else
	{
	    printf("there is a missmatch");
	}
    printf("\n");
}

int main()
{
    int n=4;
    int v[4]={1,2,3,4};
    int m=4;
    int w[4];
    copyArr(n,v,m,w);

    return 0;
}