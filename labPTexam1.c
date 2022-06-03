#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char chars[100];
    unsigned freq[30];

}lines;

void readLines(lines *text, unsigned n)
{
    for(int i=0;i<n;i++)
    {
        fgets(text[i].chars,100,stdin);
        for(int j=0;j<30;j++)
        {
            text[i].freq[j]=0;
        }
    }
}

void lineFreq(lines *text,  unsigned n)
{
    for(unsigned i=0;i<n;i++)
    {
        unsigned j=0;
        while(text[i].chars[j])
        {
            if(isalpha(text[i].chars[j]))
            {
                text[i].freq[tolower(text[i].chars[j])-'a']++;
            }
            j++;
        }
    }
}

void orderLines(lines *text, unsigned n, char key)
{
    for(unsigned i=0;i<n-1;i++)
    {
        for(unsigned j=i+1;j<n;j++)
        {
            if(text[i].freq[key-'a']>text[j].freq[key-'a'])
            {
                lines auxline=text[i];
                text[i]=text[j];
                text[j]=auxline;
            }
        } 
    }
}

void displayLines(lines *text, unsigned n)
{
    for(unsigned i=0;i<n;i++)
    {
        printf("%s",text[i].chars);
        for(unsigned j=0;j<30;j++)
        {
            if(text[i].freq[j]>0)
            {
                printf("%c = %d\n",'a'+j,text[i].freq[j]);
            }
        }
        putchar('\n');
    }
}

int main(int argc, char *argv[])
{
    if(argc<3)
    {
        printf("Not enough input\n");
    }
    unsigned linenum;
    char key;
    linenum=atoi(argv[1]);
    key=argv[2][0];
    lines text[100];
    readLines(text,linenum);
    putchar('\n');
    lineFreq(text,linenum);
    orderLines(text,linenum,key);
    displayLines(text,linenum);
    
    return 0;
}