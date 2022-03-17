#include <stdio.h>

unsigned maximumdigit()
{///i m searching for the maximum digit
    unsigned max=0,u,n;
    unsigned x=n;
    while(x!=0)
    {
	u=x%10;
	if(u>max)
	{
	    max=u;
	}
	x=x/10;
    }
	return max;

}

unsigned newnum()
{///when i find the maximum digit i make another number who doesnt have the maximum digits
    unsigned x;
    while(x!=0)
    {
	if(x%10==maximumdigit())
	{
	    x=x/10;
	}
    }
    return x;

}


int main()
{
    unsigned n,newnr=0,p=1;
    unsigned x;
    while(n!=0)
    {
	
	newnr=newnr*p+maximumdigit();
	p=p*10;
	n=newnum();
    }
    printf("The maximum number made out of the digits is %u",newnr);

}