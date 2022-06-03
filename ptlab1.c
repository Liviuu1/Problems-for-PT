#include <stdio.h>
#include <stdlib.h>
/*Write a C function to check the validity of ISBN-13 numbers. The
last digit of an ISBN-13 number is obtained from the weighted
sum of all the other digits. For instance, for ISBN 9781435704572
the sum is 1 × 9 + 3 × 7 + 1 × 8 + 3 × 1 + 1 × 4 + 3 × 3 + 1 × 5 + 3 ×
7 + 1 × 0 + 3 × 4 + 1 × 5 + 3 × 7 = 118. The last digit is obtained
from 2 = 10 − (118 mod 10) which means the input ISBN number
is correct.
*/

unsigned long long isbn(int n)
{
    int c=n;
    c=n/10;
    int inv=0;
    while(c!=0)
    {
	inv=inv*10+c%10;
	c=c/10;
    }
    if(inv==0)
        return 0;
    else
        return inv;
}


int main()
{
    unsigned long long n=25463;
    unsigned long long p=isbn(n);
    printf("%llu\n",p);
    int k=1;
    int sum=0;
    while(p)
    {
	if(k%2==1)
	{
	    sum=sum+p%10;
	    k++;
	}
	else
	    {
		sum=sum+3*p%10;
		k++;
	    }
	p=p/10;
    }
    printf("%d\n",sum);
    return 0;
}