#include <stdio.h>
#include <ctype.h>

int main()
{
    int w,l,p,k;
    w=0;
    l=0;
    p=0;
    int c;
    while((c=getchar())!=EOF)
    {
	if(c=='\n')
	{
	    if(c=='\n')
	    {
		p++;
		l++;
		w++;
	        k++;
		if(k==l)
		printf("%d",k);
		else
		{
		    printf("NO");
		}
	        w=0;
	        l=0;
	    }
	    else
	    {
	        l++;
		w++;
	    }
	}
	else
	{
	    if(c==EOF)
	    {
		p++;
		l++;
		w++;
		k++;
		if(k==l)
		printf("%d",k);//// if num of letters are equal to k then we print k
		else
		printf("NO");
	    }
	    else
	    {
		if(c==' ')
		w++;
	    }
	}
    }

    return 0;
}
