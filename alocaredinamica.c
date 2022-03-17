#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int *v=NULL;
    int *v2;
    for(;;){
	int k;
    	printf("v[%d]",n);
        scanf("%d",&k);
	if(!k)
	    break;
	n++;
	if((v2=(int*)realloc(v,n*sizeof(int)))==NULL)
	{
	    printf("memorie insuficienta\n");
	    free(v);
	    exit(EXIT_FAILURE);
	}
	v=v2;
	v[n-1]=k;
    }

    int i;
    int ok=1;
    for(i=0;i<n;i++)
    {
	if(v[i]%2!=0)
	{
	    ok=0;
	    break;
	}
    }
    if(ok)
    printf("toate numerele sunt pare\n");
    else
	printf("exista si numere impare\n");
    
    free(v);

    return 0;
}