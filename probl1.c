#include <stdio.h>

int function(int a, int calls)
{
    if(a>12)
    {
	printf("the number of calls the function has made is: %d",calls);
	return a-1;
    }
    else
    {
	calls++;
	function(function(a+2,calls),calls);
    }
    return 0;
}

int main()
{
    int a=5;
    function(a,0);

    return 0;

}