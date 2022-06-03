#include <stdio.h>
#include <ctype.h>

int verifcelmaimare(int x)
{
    int c,max=0,p=1,i;
    while((c=getchar())!=EOF)
    {
	for(i=9;i>=0;i--)
	{
	    if(c==i)
	    {
		max=max*p+(c-'0');
		p=p*10;
	    }
	}
    }
    return max;

}



int main()
{
  verifcelmaimare(89357261);

}