#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp=fopen("bacon.txt","r");
    char line[256];

    while(!feof(fp))
    {
	fgets(line,256,fp);
	puts(line);
    }
    fclose(fp);

    return 0;
}