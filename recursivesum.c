#include <stdio.h>
#include <stdlib.h>

int sumRec(int n)
{
    int s=0;
    if(n==0)
	return 0;
    else
        s=s+sumRec(n/10);
}

int main()
{
    sumRec(12);
    return 0;
}