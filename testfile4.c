#include <stdio.h>
int main()
{

    char c;
    int s=0,p=0;
    while((c=getchar())!=' ' || (c!=EOF))
    {
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	    {s++;}
	else
	    {p++;}
    }
    printf("there are %d vowels and %d consonant ",s,p);

    return 0;

}