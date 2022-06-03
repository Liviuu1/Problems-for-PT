#include <stdio.h>
#include <stdlib.h>

int Tribonacci(int x)
{
    int m,n,p,q;
    printf("m is");
    scanf("%d",&m);
    printf("n is:");
    scanf("%d",&n);
    printf("p is:");
    scanf("%d",&p);
    printf("%d %d %d ",m,n,p);
    int k=x-3;
    if(n==0 && m==0 && p==0)
    {
        return NULL;
    }
    if(n>300 && m>300 && p>300)
    {
        return 0;
    }
    while(k!=0)
    {
        q=m+n+p;
        printf("%d ",q);
        m=n;
        n=p;
        p=q;
        k--;
    }
    putchar('\n');
}


int main()
{
    Tribonacci(10);
    return 0;
}