#include <stdio.h>

int factorial(unsigned n)
{
    if(n==1 || n==0)
    return 1;
    if(n==2)
    return 2;
    return factorial(n-1)*factorial(n-2);

}

int main()
{
    printf("%d\n",factorial(4));
    

}