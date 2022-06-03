#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if(n<2)
	return 0;
    for(int i=2;i<n;i++)
    {
	if(n%i==0)
	return 0;
    }
    return 1;
}

void fillArr(int v[],int n)
{
    int i=2;
    int j=0;
    while(n)
    {
	if(isPrime(i)==1)
	{
	    v[j]=i;
	    n--;
	    j++;
	}
	i++;
    }
    for(int i=0;i<j;i++)
    printf("%d ",v[i]);
    printf("\n");
}

int binarySearch(int arr[],int x)
{
    int l=0,r=0;
    for(int i=0;arr[i];i++)
    {
	r++;
    }
     while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      l = mid + 1;

    else
      r = mid - 1;
  }

  return -1;
}

int main()
{
    int n;
    int x;
    scanf("%d",&n);
    scanf("%d",&x);
    int v[n];
    fillArr(v,n);
    if(binarySearch(v,x)!=-1)
	printf("Exista\n");
    else
	printf("Am retard\n");
    
    return 0;
}