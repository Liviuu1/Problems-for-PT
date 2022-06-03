#include <stdio.h>
int countuppercases()
{ 
   char c;
   int i=0;
   c=getchar();
   while(c!='\n')
   {
      if(c>='A' && c<='Z')
      {i++;}
      c=getchar();  

   }
   return i;

}
 

