#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
	if(c>'a' && c<'z')
	    printf("%c", toupper(c));
	else
	    printf("%c", tolower(c));

    }
    
    return 0;

}

