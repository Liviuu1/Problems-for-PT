#include <stdio.h>
#include <ctype.h>

unsigned coma()
{
    int nr=0;
    int c;
    int k=0;
    while((c=getchar())!=EOF)
    {
	if(isdigit(c))
	{
	    nr=nr*10+(c-'0');
	    k++;
	    if(k>3)
	    {
		return -1;
	    }
	}
	else if(c==',')
	{
	    k=0;
	}
	
    }
    return nr;
}