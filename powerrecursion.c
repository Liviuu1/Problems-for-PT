#include <stdio.h>

double power(double k, unsigned n)
{

    if(n==0)
    return 1;
    return k*power(k,n-1);

}
int main()
{
    printf("%f\n",power(-2.0,3));

}