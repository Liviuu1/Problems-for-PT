#include <stdio.h>

unsigned cmmdc(unsigned a, unsigned b)
{
    if(a==b)
    return b;
    if(a>b)
    return cmmdc(a-b,b);
    if(b>a)
    return cmmdc(a,b-a);


}
int main()
{
    printf("%u\n",cmmdc(5,78));
    printf("%u\n",cmmdc(5,75));
    printf("%u\n",cmmdc(10,100));

}