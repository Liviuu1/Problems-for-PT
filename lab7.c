#include <stdio.h>
#include <math.h>

unsigned hextoTwoRec(unsigned n, unsigned power)
{
    
    if(n==0)
	return 0;
    else
    {
	int u=n%10;
	return u*power+hextoTwoRec(n/10,power*16);
    }
}

unsigned hextotwo(unsigned n)
{
    return hextoTwoRec(n,1);
}

int main()
{
    unsigned r=hextotwo(312);
    printf("%d",r);
    
    return 0;

}