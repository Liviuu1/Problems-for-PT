#include <stdio.h>


int main()
{
    int a,b,c;
    int s1,s2,s3,i;
    s1=s2=s3=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    for(i=a;i<=b;i++)
	s1=s1+i;
    for(i=b;i<=c;i++)
	s2=s2+i;
    for(i=a;i<=c;i++)
	s3=s3+i;
    printf("%d %d %d",s1,s2,s3);
}