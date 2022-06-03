#include <stdio.h>
#include <stdlib.h>


int main()
{
    char a[3][3];
    int i,j;
    int ok=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%hhd",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j || j==4-j)
            {
                printf("X wins\n");
                ok=1;
                break;
            }
            else if(a[0][j]==1 && ok!=1)
            {
                printf("X wins\n");
                ok=1;
                break;
            }
            else if(a[1][j]==1 && ok!=1)
            {
                printf("X wins\n");
                ok=1;
                break;
            }
            else if(a[2][j]==1 && ok!=1)
            {
                printf("X wins \n");
                ok=1;
                break;
            }
            else if(a[i][0]==1 && ok!=1)
            {
                printf("X wins \n");
                ok=1;
                break;
            }
            else if(a[i][1]==1 && ok!=1)
            {
                printf("X wins \n");
                ok=1;
                break;
            }
            else if(a[i][2]==1 && ok!=1)
            {
                printf("X wins");
                ok=1;
                break;
            }
            else if(ok==0)
            {
                printf("Nobody won");
            }
            
        }
                
    }


   
    return 0;
}   