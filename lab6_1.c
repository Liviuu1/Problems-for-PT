#include <stdio.h>

int fibonacc(unsigned n)
{

    if(n==1 || n==2)
    return 1;
    return fibonacc(n-1)+fibonacc(n-2);
    printf("fibonacc");


} 


int main()
{
    printf("%u\n",fibonacc(10));
    
    return 0;
}