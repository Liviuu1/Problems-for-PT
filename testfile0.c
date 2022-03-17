#include <stdio.h>
int swapLMD(unsigned n)
{    

    int u,u1,u2,num=0;
    u=n%10;
    u1=n/10%10;
    u2=n/100%10;
    num=u*100+u1*10+u2;
  
return num;

}

int main()
{
    printf("%d",swapLMD(298));
  return 0;

}