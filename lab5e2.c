#include <stdio.h>

unsigned count(unsigned n)
{
        unsigned count=0;
        while(n!=0)
        {
                count=count+n&1;
                n=(n>>1);
        }
        return count;
}

int main()
{
        long i=8;
	printf("%u\n",count(i));
        return 0;
}