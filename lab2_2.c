#include <stdio.h>

void addtime(unsigned h, unsigned m, unsigned dmin)
{
    m=m+dmin;
    h=h+m/60;
    m=m%60;
    if(h>=24)
    {
	h=h%24;
    }

    
    printf("%d:%d",h,m);
}


int main()
{

    addtime(22,50,100);    
    return 0;
}