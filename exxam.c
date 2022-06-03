#include <stdio.h>

/* int ack(int m, int n)
{
    static int cont=0;
    cont++;
    printf("%x\n",cont);
    if (m == 0){
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        return ack(m-1, 1);
    }
    else if((m > 0) && (n > 0)){
        return ack(m-1, ack(m, n-1));
    }
    return 0;
}

int main()
{

    printf("Value of ack is %d",ack(1, 2));
    return 0;
}*/

int fillArray(int v[],int n)
{
    int i=0,x;
    while(scanf("%d",&x)!=1 || x!=0 && i<n)
    {
	if(x>100 && x<99999)
	{
	    v[i++]=x;
	}
    }
    return v[i];
}
int main()
{
    int v[50];
    fillArray(v,50);
    return 0;
}
