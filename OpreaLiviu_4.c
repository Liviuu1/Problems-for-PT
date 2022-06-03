#include <stdio.h>
#include <string.h>

int citire_fisier(char filename[]) {

        char line[100];
        int i = 0;
        char end[] = ".txt";
        FILE* fp1 = fopen(strcat(filename,end), "r");
        if (fp1 == NULL){
            printf("ERROR");
        }else{

            while (fgets(line, 100, fp1) != NULL){
                while (line[i] != ' '){
                    //
                    i++;
                }
                i=0;

            }
        }
    }

int main()
{
    char filename[30];
    char website[50];

    printf("What is the filename?\n");
    scanf ("%s",filename);
    printf("Your name is %s\n",filename);

    return 0;
}