#include <stdio.h>
#include <string.h>

 

int main()
{
    FILE *ptr;
    ptr=fopen("C:\\program.txt","w");
    if(ptr==NULL)
    {
	printf("error");
	exit(1);
    }
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    fprintf(ptr,"%d",n);
    fclose(ptr);

    return 0;
}