#include <stdio.h>
#include <math.h>

double Given_Function(double value)
{
    return 2*(value*value)-1;
}

int main()
{
    printf("Please choose your function \n0 - 2x^2-1\n1 - tangent. \n Input=");
    int choice;
    if(scanf("%d",& choice)!=1)
    {
        return -1;
    }
    double (*pointer)(double);
    if(choice==0)
    {
        pointer=&Given_Function;
    }
    else
    {
        pointer=&tan;
    }
    for(double i=0;i<=1;i=i+0.01)
    {
        printf("%lf",pointer(i));
    }
}