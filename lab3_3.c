#include <stdio.h>
#include <ctype.h>

unsigned peek()
{
    int c;
    c=getchar();
    ungetc(c,stdin);
    return c;
}
unsigned resolved(unsigned n)
{
    int c;
    int k,numlett;
    while((c=getchar())!=EOF)
    {
	numlett++;
	if(numlett<n)
	{
	    putchar(c);
	}
	else if(n==numlett)
	{
	    if((k==peek())==' ')
	    {
		numlett=0;
		putchar(c);
		putchar('\n');
	    }
	    else
	    {
		putchar('-');
		putchar('\n');
		numlett=0;
		ungetc(c,stdin);
	    }
	}
    }

    return numlett;
}

int main()
{

    int n;
    n=5;
    resolved(n);
    return 0;
}