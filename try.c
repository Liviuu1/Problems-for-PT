#include <stdio.h>
#include <ctype.h>

void bit(unsigned n)
{
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
	if((n&(1<<i)))
	    putchar('0');
	else
	    putchar('1');
    }


}


int main()
{
    int k,n;
    k=bit(n);
    printf("%d",k);
    
}