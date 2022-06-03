#include <stdio.h>

void pseudoSort(int arr[],int len)
{

	for(int i=0;i<len/2;i++)
        for(int j=len;j>len/2;j--)
	{
	    arr[i]=arr[i]+arr[j];
	    arr[j]=arr[i]-arr[j];
	    arr[i]=arr[i]-arr[j];
	}
	//pseudoSort(arr[i],pseudoSort(arr[i],len/2));
	//pseudoSort(arr[i],pseudoSort(arr[i],len/2+1));
}

int main ()
{
  int length=5;
  int v[5]={1,2,3,4,5};

  printf("Se dau numerele \n");
  for(int i=1;i<=length;i++)
    scanf("%d",&v[i]);
  
  pseudoSort(v,length/2);
  
  for(int i=1;i<=length;i++)
    printf("%d ", v[i]);
  printf ("\n");
  
  pseudoSort(v,length/2+1);
  
  for (int i=1;i<=length;i++)
   printf ("%d ", v[i]);
  printf ("\n");

}