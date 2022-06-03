#include <stdio.h>
#include <stdint.h>

void printBit(int32_t set)
{
    for(int i=0;i<26;i++)
    {
	if(set&1<<i)
	{
	    putchar(i+'a');
	}
    }
    putchar('\n');
}

int32_t lowercaseSet(char v[])
{
  int32_t set=0u;

  for (int i=0;v[i]!='\0';i++)
  {
    unsigned letter=v[i]-'a';
    if (0<=letter && letter<26)
    {
      set=set|1<<letter;
    }
  }

  return set;
}

int main()
{
    printBit(lowercaseSet("your computer has viruses"));
    printf("%d\n",lowercaseSet("ana are mere"));
    printf("%d\n",lowercaseSet("aeiou"));
}