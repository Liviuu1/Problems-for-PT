#include <stdio.h>
#include <ctype.h>

unsigned cons(unsigned nr)
{
    unsigned k=0,prev;
    while(nr)
    {
	prev=nr&1;
	nr=nr>>1;
	if((nr&1)!=prev)
	{
	    k++;
	}
    }

    return k;

}
    
int main()
{

    printf("%d\n",cons(256));
}