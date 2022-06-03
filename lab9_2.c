#include <stdio.h>

/*int arr(int x[], unsigned nx, int y[],unsigned ny)
{
    int ok=0,i,j;
    if(ny>nx){
	return ok;
    }
    else{
	for(i=0;i<nx;i++)
	{
	    for(j=0;j<ny;j++)
	    {
		if(x[i]==y[j])
		{
		    ok=1;
		}
	    }
	}
    return ok;

}

int main()
{
    int x[]={1,2,3,5,7,9,12};
    int y[]={1,3,5,7};
    x=arr(x,7,y,4);
    printf("%d",x);
    return 0;
}
*/

void printTab(int t[],unsigned lenght)
{
    for(int i=0;i<lenght;i++)
	printf("%d",t[i]);
	printf("\n");

}
int main()
{
    int prime[5]={2,3,5,7,11};
    printTab(prime,5);
    return 0;
}


