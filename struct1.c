#include <stdio.h>

typedef struct{
    char nume[50];
    int pret;
}Produse;

int main()
{
    Produse produse[100];
    int i,j,operatie,n=0;
    for(;;)
    {
	printf("1. Introducere\n");
	printf("2. Afisare\n");
	printf("0. Iesire\n");
	printf("operatia: ");
	scanf("%d",&operatie);
	switch(operatie)
	{
	    case 1:
		getchar();
		printf("nume: ");
		fgets(produse[n].nume,50,stdin);
		produse[n].nume[strcspn(produse[n].nume, "\n")]='\0';
		printf("pret: ");
		scanf("%d",&produse[n].pret);
		n++;
		break;
	    case 2:
		for(i=0;i<n;i++)
		{
		    printf("%s %g\n",produse[n].nume, produse[n].pret);
		}
		break;
	    case 0:
		return 0;
		default:
		printf("operatie necunoscuta");
	}
    

    }

}