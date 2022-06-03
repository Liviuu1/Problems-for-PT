#include <stdio.h>
#include <math.h>

unsigned power(unsigned x,unsigned n)
{
    if(n==0)
	return 1;
    else
	return x*power(x,n-1);

}



/*#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int x=pow(5,4);
    printf("%d\n",x);
}
*/