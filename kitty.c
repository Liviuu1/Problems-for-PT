#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int v[100],a,b,n;

void afisareback(int nrelem)
{
    for(int cnt=1;cnt<=nrelem;cnt++)
        printf("%d ",v[cnt]);
    printf("\n");
}


void bk(int suma, int k)
{
    for(int cnt=a;cnt<=b;cnt++)
    {
        v[k]=cnt;
        if(v[k-1]<=v[k] || k==1)
        {
            suma=suma+v[k];
            if(suma<=n && suma==n )
                 afisareback(k);
            else  if(suma<=n && suma!=n)
                     bk(suma,k+1);
            suma=suma-v[k];
        }
    }
}


int main(int argc, char** argv)
{
    if(argc<2)
    {
        printf("Nu este destul input \n");
        return -1;
        exit(EXIT_FAILURE);
    }
    else
    {
         scanf("%d%d%d",&n,&a,&b) ;
        bk(0,1);
    }
    
    return 0;
    
}