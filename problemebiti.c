#include <stdio.h>

int valoare1Bit(long n)
{
    unsigned nr=0,i;
    for(i=0;i<=sizeof(n)*8-1;i++)
	  if((n&(1<<i)))
	    nr++;
    return nr/2;
}
void bit(unsigned n)
{
    int i;
    for(i=sizeof(n)*8-1;i>=0;i--)
	{
	    if((n&(1<<i))==0)
		{putchar('0');}
	    else
		{putchar('1');}
	}

}
int main()
{
    int n;
    printf("%d",1<<n);
    return 0;
}
