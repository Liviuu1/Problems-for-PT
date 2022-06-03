#include <stdio.h>

void saripestespatii()
{
    int c;
    while((c=getchar())==' ')
    {

    }
    ungetc(c,stdin);

}

void afisarecaractere()
{
    int c;
    while((c=getchar())!=' ' && (c!=EOF))
    {
    putchar(c);
    }

}

int main()
{
    int c;
    while((c=getchar())!=EOF)
    {
    ungetc(c,stdin);
    saripestespatii();
    afisarecaractere();
    putchar(' ');
    }

  return 0;
}