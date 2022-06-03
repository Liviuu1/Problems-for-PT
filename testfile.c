#include <stdio.h>
#include <ctype.h>

void bitwiseoperators(unsigned n)
{

    for(int pos=sizeof(n)*8-1;pos>=0;pos--)
    {
	if((n&(1<<pos))==0){
	    putchar('0');
	    }
	else
	    putchar('1');
    }


}

int main()
{
    bitwiseoperators(12);
    printf("\n");
    printf("\a");
    bitwiseoperators(255);


}

