#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int cons(char *word){

    int i=0,n,nr=0;
    n=strlen(word);
    while(i<n){
        if(isupper(word[i])){
            nr++;
        }
        else{
            if(nr>=4){
                return 1;
            }
            nr=0;
        }
        i++;
    }
    if(nr>=4){
        return 1;
    }
    else{
        return 0;
    }
}

void mystrings(FILE *f){
    int c,n;
    char* word=NULL;
    char** buff=NULL;
    int lw=0;
    int nrbuff=1;
    int ok;
    while((c=fgetc(f))!=EOF){
        if(!isspace(c)){
            ok=1;
            lw++;
            char* aux=realloc(word,lw*sizeof(char));
            char** aux2=realloc(buff,nrbuff*sizeof(char*));
            if(!aux){
                printf("momorry not alocated");
                free(word);
            }
            if(!aux2){
                printf("momory not allocated 2");
                free(buff);
            }
            buff=aux2;
            word=aux;
            word[lw-1]=c;
            //printf("%c=",word[lw-1]);
        }
        else{
            ok=0;
        }
        if(ok==0){
            //printf("%s \n",word);
            n=cons(word);
            if(n==1){
                nrbuff++;
                buff[nrbuff-1]=strdup(word);
                word=realloc(word,0*sizeof(char));
                lw=0;
            }
            else{
                word=realloc(word,0*sizeof(char));
                lw=0;
            }
            //printf("n=%d\n",n);
        }
       
    }
    for(int i=1;i<nrbuff;i++){
        printf("%s ",buff[i]);
    }
}
int main(int argc, char* argv[]){
    FILE *f;
    f=fopen(argv[1],"r");
    if(f == NULL)
    {
      printf("Error! Nu am deshcis fiiserul\n");   
      exit(1);             
    }
   // print_unix_strings(fptr);
   mystrings(f);
    fclose(f);
    return 0;
}