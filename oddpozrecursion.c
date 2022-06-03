#include <stdio.h>

unsigned oddpoz(unsigned n)
{
    if(n<=9)
	return n;
    else
    {
	return oddpoz(n/100)*10+oddpoz(n%10);
    }

}

unsigned evenpoz(unsigned n)
{
    if(n<=9)
        return n;
    else
    {
    	return evenpoz(n/100)*10+evenpoz(n/10%10);
    }

}

int main()
{
    printf("%d\n",oddpoz(1259034));
    printf("%d\n",oddpoz(3));
    printf("%d\n",evenpoz(1259034));
    printf("%d\n",evenpoz(3));
}
