#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multipleOf3or5(int n)
{
    int s=0;
    if(n<0)
    {
        return 0;
    }        
    for(int i=1;i<n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            s=s+i;
        }
        if(i%3==0 && i%5==0)
        {
            i++;
        }
    }
    return s;
}

int main()
{
    printf("%d \n",multipleOf3or5(15));
    return 0;
}