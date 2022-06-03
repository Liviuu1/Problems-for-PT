#include <stdio.h>
int distinctval(int a, int b, int c)
{
  if(a==b && b==c)
{
   printf("All numbers are equal");
   return 3;
}
   else if(a==b)
{
  printf("%d and %d are equal",a,b);
  return 2;
}
   else if(b==c)
{
  printf("%d and %d are equal",b,c);
  return 2;
}
  else if(a==c)
{
   printf("%d and %d are equal",a,c);
   return 2;
}
 printf("There are no equal numbers\n");
 return 0;
}

int main()
{
   int number=distinctval(111, 525, 111);
printf("\nSo: number of equal numbers %d\n", number);


return 0;
}