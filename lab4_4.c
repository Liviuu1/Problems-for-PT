#include <stdio.h>
#include <ctype.h>

unsigned separator()
{
    int n,nr=0;
    while((n=getchar())!=EOF)
    {
	if(isdigit(n))
	{
	    nr=nr*10+(n-'0');
	}
	else if(n==',')
	{
	    ;
	}
    }
	ungetc(n,stdin);
	return nr;
}

int main()
{
    printf("%u",separator());
    return 0;
}
