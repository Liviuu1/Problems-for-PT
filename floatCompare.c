#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int float_Compare(float f1, float f2)
{
    float precision=0.00001;
    if(((f1-precision)<f2) && ((f1+precision)>f2))
    {
        return 1;
    }
    else
        {
            return 0;
        }
}

int main()
{

    int choice;
    double (*p[4])(double)={sin,cos,tan,sqrt};
    char choices[4][5]={"sin","cos","log","sqrt"};
    printf("Please choose a function that you would like to use: \n");
    for(int i=0;i<4;i++)
        printf("%d.%s\n",i,choices[i]);
    if(scanf("%d",&choice)!=1)
        return -1;
    printf("Please give the value you want to evaluate \n");
    double value;
    if(scanf("%lf",&value)!=1)
        return 1;
    printf("Comparing ...\n ---------- \n");
    if(compare_float((*p[choice])(value),sqrt(value)))
    {
        printf("Results are ok \n");
    }
    printf("------------\n");
    printf("Normal function adress \t Function pointer adress \n");
    printf("%p \t\t\t %p  \n",&sin,&p[0]);
    printf("%p \t\t\t %p  \n",&cos,&p[1]);


}