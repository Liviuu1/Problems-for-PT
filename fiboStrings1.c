#include <stdio.h>

int fibonacci(unsigned n)
{

    if(n==1 || n==2)
    return 1;    
    else
	return fibonacci(n-1)+fibonacci(n-2);

}


int main()
{
    
    printf("%d\n",fibonacci(35));

}