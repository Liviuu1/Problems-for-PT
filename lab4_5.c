#include <stdio.h>
#include <ctype.h>

int prime(int n)
{
    if(n==1 && n%2==0 && n!=2)
    {    
	return 0;
    }
    if(n==2)
    {
	return 0;
    }
    for(int d=3;d*d<=n;d++)
    {
	if(n%d==0)
	return 0;
    }
    return 1;
}

void primedecomp(int n)
{
    int c=2,putere=0; 
    printf("%d=",n);
    while(c<=n)
    {
	if(prime(c)!=0)
	{
	    while(n%c==0)
	    {
		n=n/c;
		putere++;
	    }
	    if(putere && c!=2)
	    {
		printf("*");
	    }
	    if(putere)
	    {
		printf("%d^%d",c,putere);
	    }
	    putere=0;
	}
    c++;
    }
    printf("\n");
}
int main()
{

 primedecomp(18);
 primedecomp(145);
 primedecomp(16);

}