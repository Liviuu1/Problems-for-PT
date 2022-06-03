#include <stdio.h>

unsigned sumcif(unsigned n)
{
    if(n<10)
    return n;
    return n%10+sumcif(n/10);

}

int main()
{
    printf("%u\n",sumcif(245));
    printf("%u\n",sumcif(1111));

}