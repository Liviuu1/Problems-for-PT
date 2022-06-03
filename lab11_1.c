#include <stdio.h>


    /*A) Write a function int extractOdds(int v[ ], int n, int *arr[ ], int capacity) which fills the array arr
   with addresses of odd elements from array v and returns the number of values filled in v or -1, if the size would exceed the capacity.
    */
int extractOdds(int v[],int n,int *arr[],int capacity)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
	if(v[i]%2!=0)
	{
	    k++;
	    arr[k]=&v[i];
	    printf("%p",arr[i]);
	}
	if(k>=capacity)
	{
	    return -1;
	}
    }
    
}

int main()
{
    int v[]={2,7,3,4,9,4,11};
    int n=7;
    int *arr[10];
    int capacity=10; 
    int extractOdds(v,n,arr,capacity);
    
    return 0;
}