#include <stdio.h>

unsigned msd(unsigned n)
{
    int max=0;
    
    if(n<=9)
        return n;
    else
	return msd(n/10);


}

int main()
{

    printf("%d\n",msd(84164));
    printf("%d\n",msd(9));
    printf("%d\n",msd(1110));

}