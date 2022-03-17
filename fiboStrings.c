#include <stdio.h>

void fw(unsigned n)
{
    if(n==1)
    putchar('b');
    if(n==0)
    putchar('a');
    if(n>=2)
    {
	fw(n-1);
	fw(n-2);
    }

}
int main()
{
    fw(12);
    printf("\n\n\n\n\n");

}