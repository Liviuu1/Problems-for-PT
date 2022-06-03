#include <stdio.h>

unsigned numof0(unsigned n)
{
    if(n==0)
    return 0;
    else
    {
	if(n%10==0)
	return 1+numof0(n/10);
	else
	return numof0(n/10);
    }

}

int main()
{
    printf("%u\n",numof0(52352));

}