#include <stdio.h>
#include <ctype.h>

unsigned rsr(unsigned n, unsigned k)
{

    return (n>>k)|(n<<(sizeof(n)*8)-k);

}

void bit(unsigned n)
{
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
	{	
	if((n&(1<<i))==0)
	    putchar('0');
	else
	    putchar('1');
	}

}
unsigned difnr(unsigned n)
{
    unsigned u,k=1;
    
	u=n%10;
	if(u!=n/10%10)
	{
	    k++;
	}
    return k;
}

unsigned power(double x, unsigned n)
{
    if(n==0)
    return 1;
    else 
	return x*power(x,n-1);

}


int main()
{

    bit(3^634636);

}