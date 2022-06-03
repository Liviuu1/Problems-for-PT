#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int v[];
    int ok=1;
    scanf("%d",n);
    for(int i=0;i<n;i++)
    {
	scanf("%d",v[]);
	if(v[i]%2!=0)
	{
	    ok=0;
	    break;
	}
    }
    if(ok)
    printf("toate numerele sunt pare\n");
    else
	printf("nu toate numerele sunt pare\n");

    return 0;
}