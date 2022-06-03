#include <stdlib.h>
#include <stdio.h>
#include <string.h>

    char **linii=NULL;
    int nrLinii=0;

void elib()
{
    for(int i=0;i<nrLinii;i++)
    free(linii[i]);
    free(linii);

}

char *linie()
{
    char buf[201];
    char *p;
    size_t n;
    fgets(buf,201,stdin);
    buf[strcspn(buf,"\n")]='\0';
    n=strlen(buf)+1;
    if((p=(char*)malloc(n*sizeof(char)))==NULL)
    {
	eliberare();
	printf("memorie insuficienta\n");
	exit(EXIT_FAILURE);

    }
	strcpy(p,buf);
	return p;

}

int main()
{

    char **linii2;
    char *p;
    int i;
    for(;;){
        p=linie();
        if(strlen(p)==0){
            free(p);
            break;
            }
        //realoca linii pentru o noua linie
        nrLinii++;
        if((linii2=(char**)realloc(linii,nrLinii*sizeof(char*)))==NULL){
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
            }
        linii=linii2;
        linii[nrLinii-1]=p;
        }
    printf("introduceti sirul de cautat:");
    p=linie();
    for(i=0;i<nrLinii;i++)
	{
    	    if(strstr(linii[i],p))printf("%s\n",linii[i]);
        }
    free(p);
    eliberare();
    return 0;

}