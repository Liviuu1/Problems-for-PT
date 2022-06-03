#include <stdio.h>

int nrofchar()
{

    int c;
    int k=0;
    while((c=getchar())!=EOF)
    {
	k++;
    }
    return k;
    

}

int main()
{
    printf("%u",nrofchar());

}