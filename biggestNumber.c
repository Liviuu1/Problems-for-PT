#include <stdio.h>
#include <stdlib.h>

int numOfdigits(int n)
{
    int k=0;
    while(n)
    {
        if(n%10)
        {
            k++;
        }
        n=n/10;
    }
    return k;
}

void array(int n)
{
    int k=numOfdigits(n);
    int c[k];
    int i=0;
    while(k!=0 && n!=0)
    {
        c[i]=n%10;
        n=n/10;
        i++;
        k--;
    }
    
}

int main()
{
    int m;
    int n;
    array(734627);
    return 0;
}