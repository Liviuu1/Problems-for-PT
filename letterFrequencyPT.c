#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NLETTERS 97

int main(int argc, int *argv[])
{
    int c,i,accum=0,letter[NLETTERS]={0};
    FILE *ifp, *ofp;
    
    ifp=fopen(argv[1],"r");
    ofp=fopen(argv[2],"w");

    if(ifp == NULL)
    {
        perror("No input file\n");
        return -1;
    }
    if(ofp == NULL)
    {
        perror("Trouble making the output file\n");
        return -1;
    }

    for(i=0;i<NLETTERS;i++)
    {
        letter[i]=0;
        for(; (c=getc(ifp))!=EOF; ++accum)
        {
            if(isalpha(c))
            {
                if(c>='a')
                ++letter[c-'a'];
                else
                ++letter[c-'A'+25];
            }
        }
    }

    for(i=0;i<NLETTERS;++i)
    {
        if(letter[i]!=0)
        {
            if(i<25)
            fprintf(ofp,"%c - ",i+'a');
            else if(i>=25)
                fprintf(ofp,"%c - ",i+'A'-25);
        fprintf(ofp, "%f\n",(((double)letter[i]/(accum-1))*100));
    
    }
}
return 0;
}