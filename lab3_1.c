#include <stdio.h>
#include <ctype.h>

int whitespace(int c)
{
    return c==' ' || c=='\t' || c=='\v';

}

void deletewhitespaces()
{
    
    int c;
    while((c=getchar())!=EOF && whitespace(c))
    ungetc(c,stdin);
}

void printwords()
{

    int c;
    while((c=getchar())!=EOF && !whitespace(c))
    {
         putchar(c);
    }
    ungetc(c,stdin);

}

int main()
{
    int c;
    while((c=getchar())!=EOF)
    {
    ungetc(c,stdin);
    printwords();
    deletewhitespaces();
    putchar(' ');
    }
 return 0;
}