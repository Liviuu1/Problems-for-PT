#include <stdio.h>
#include <ctype.h>
int readuntilmin()
{

    int n,s=0,seq=0;
    while((n=getchar())!=EOF)
    {
	    if(n!='-')
	    {
		if(n!=' ')
		{
		    if(isdigit(n))
		    {
			s=s+(n-'0'); //aflam suma numerelor de la spatiu la spatiu daca nu dam de EOF sau de -
		    }
		}
		else if(n==' ')
		{
		    if(s%2==0)
			{
				seq++; //crestem secventa pozitiva, daca suma este para
			}
		    s=0;
		}
	    }
	    else if(n=='-')
	    {
		break;
	    }
    }
    return seq;

}
