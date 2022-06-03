#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double minFunct(unsigned int n,...)
{
    va_list valist;
    va_start(valist,n);
    double min;
    int first=1;
    double a;
    for(unsigned int i=0;i<n;i++)
    {
	if(first==1)
	    {
		min=va_arg(valist,double);
		first=0;
	    }
	else
	    {
		if((a=va_arg(valist,double))<min)
		min=a;
	    }
    }
    va_end(valist);
    return min;
}
double maxFunct(unsigned int n,...)
{
    va_list valist;
    va_start(valist,n);
    double max=0;
    double a;
    int first=1;
    for(unsigned int i=0;i<n;i++)
    {
	if(first==1)
	{
	    max=va_arg(valist,double);
	    first=0;
	}
	else
	{   
	     if((a=va_arg(valist,double))>max)
	     max=a;
	}
    }
    va_end(valist);	
    return max;

}

int main()
{
    printf("Minimum of 24. ,5.0395, 11, 999 is %lf\n",minFunct(4,4.0,5.0395,11.0,999.0));
    printf("Maximum of 99 ,763, 1234,8 is %lf\n",maxFunct(4,99.0,763.0,1234.0,84984.0));
    return 0;
}