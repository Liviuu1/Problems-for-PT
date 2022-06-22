#include <stdio.h>
#include <stdlib.h>

int st[100]={0};

int validNumebers(int st[], int n)
{
    if(n>10)
    return 0;
    if(n>4)
    {
        for(int i=0;i<n;i++)
        {
            if(st[i]==st[n] && st[i]%2==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int solution(int n, int st[])
{
    int even;

    if(n==10)
    {
        for(int i=5;i<=10;i++)
        {
            if(st[i]%2==0)
            even++;
        }
        if(even==3)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

void pattern(int st[])
{
    for(int i=0;i<=4;i++)
        printf("%d",st[i]);
    printf(" ");
    for(int i=5;i<=10;i++)
    {
        printf("%d",st[i]);
    }
    printf("\n");
}


void  backtrack(int st[],int n)
{
    st[1]=0;
    st[2]=7;
    st[3]=2;
    st[4]=1;
    for(int i=0;i<10;i++)
    {
        if(n>4)
        {
            st[n]=i;
        }
        if(validNumebers(st,n))
        {
            if(solution(n,st))
                pattern(st);
            else
                {
                    bactrack(st,n+1);
                }
        }
    }
}

int main()
{
    backtrack(st,5);

    return 0;
}