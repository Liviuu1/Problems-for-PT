#include <stdio.h>

struct dreptunghi{
    int latimea;
    int lungimea;
};

int main()
{
    struct dreptunghi v[10];
    int i,n;
    int imax;
    printf("n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("latime:%d:", i);
	scanf("%d",&v[i].latimea);
	printf("inaltime:%d", i);
	scanf("%d",&v[i].lungimea);
    }
    imax=0;
    for(i=1;i<n;i++)
    {
	if(v[imax].latimea*v[imax].lungimea<v[i].latimea*v[i].lungimea)
	imax=i;
    }
    printf("dreptunghi de arie maxima %d%d \n",v[imax].latimea,v[imax].lungimea);

}