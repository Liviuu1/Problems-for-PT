#include <stdio.h>

/*int fun(char *str1)
{
    char *str2=str1;
    while(*str1)str1++;
    return (str1-str2);

}

int main()
{
    char* str="ACSA-UPT";
    printf("%o",fun(str));
    return 0;

}

int main()
{
    char str[]="AcsaUpt";
    printf("%s %s %s", &str[4], &4[str], str+4);
    printf("%c %c %c",*(str+5), str[5], 5[str]);
    return 0;
} 
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=(int*)(&a+1);
    printf("%d  %d ",*(a+1),*(ptr-1));
    return 0;
}*/

int main()
{
    unsigned char i=0x80;
    printf("%d\n",i<<1);
    return 0;

}