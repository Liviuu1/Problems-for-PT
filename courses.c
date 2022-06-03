#include <stdio.h>
/*
void inc(int x)
{
    printf("in function : %d",++x);
}

int main(void)
{
    int y=5;
    inc(y);
    printf("in main: %d\n",y);
    return 0;
}

double sum(double v[],unsigned n)
{
    double i,summ=0.;
    for(i=0;i<n;i++)
    summ=summ+v[i];	

    return summ;
}
#define lenght 	4

int main()
{
    int length;
    double a[length]={0.2,12,0.3,8};
    printf("summ is: %f\n",sum(a,length));
    
    return 0;
}

double sum(double a[], unsigned len)
{
    double s = 0.; // must be initialized
    for (unsigned i = len; i--;) // in any direction
    s += a[i];
    return s;
}
#define LEN 4
int main()
{
    double a[LEN] = { 1.0, 2.3, -5.6, 7 };
    printf("%f\n", sumtab(a, LEN));
    return 0;
}*/
int main()
{
    int c;
    unsigned freq[256]={0};
    while((c=getchar())!=EOF)
    {
	++freq[c];
    }
    for(unsigned car=0;car<256;++car)
    {
	if(freq[car]!=0)
	printf("%c appears %u times\n",car,freq[car]);
    }

    return 0;
}

