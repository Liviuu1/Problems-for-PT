#include <stdio.h>
 
int main()
{
   char s1[30], s2[30];                               // șirurile de intrare
   char s[100];                                           // șirul destinație
   char sep[] = " si ";
   int i, j;
   printf("nume1: ");
   fgets(s1, 30, stdin);
   printf("nume2: ");
   fgets(s2, 30, stdin);
   j = 0;                                                     // index in destinatie
   for (i = 0; s1[i] && s1[i] != '\n'; i++){       // copiaza caracterele din s1 pana la aparitia \0 sau \n
       s[j++] = s1[i];
   }
   for (i = 0; sep[i]; i++){                            // concateneaza separatorul
       s[j++] = sep[i];
   }
   for (i = 0; s2[i] && s2[i] != '\n'; i++){       // concateneaza caracterele din s2
       s[j++] = s2[i];
   }
   s[j] = '\0';                                                 // adauga terminatorul
   printf("text final: %s", s);
   return 0;
}
