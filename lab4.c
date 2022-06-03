#include <stdio.h>
#include <ctype.h>

void printhex(unsigned n)
{
    if(n>=0 && n<=9)
    putchar('0'+n);
    if(n>=10 && n<=15)
    putchar('A'+(n-10));

}

void convertb16(unsigned nr)
{
    //we need to write the number as a sum of powers of 16
    unsigned p16=1;
    while(p16<=nr)
	{
	    p16=p16*16;
	}
	p16=p16/16;  //make it for sure less or equal to nr;
	while(p16>=1)
	{
	    unsigned hexdigitvalue=nr/p16;	
	    printhex(hexdigitvalue);
	    nr=nr%p16;
	    p16=p16/16;    

	}
	printf("\n");
}
///convert_to_b16(120)		//120/16=7  (r8); 0x78// inmultesc 16 cu 7 imi da 112 si restul e 8;
    
int main()
{
   convertb16(16);

}

