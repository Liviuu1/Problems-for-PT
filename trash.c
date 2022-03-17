#include <stdio.h>

void showBits(unsigned n)
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
    unsigned a,b;
    printf("a is: ");
    scanf("%u",&a);
    printf("b is: ");
    scanf("%u",&b);
    printf("\n");
    printf("a in base 2 is ");		showBits(a);
    printf("\n");
    printf("b in base 2 is ");		showBits(b);
    printf("\n");
    printf("a&b is ");		showBits(a&b);
    printf("\n");
    printf("a|b is ");		showBits(a|b);
    printf("\n");
    printf("~a is ");			showBits(~a);
    printf("\n");


}