#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

struct {
    enum{
            cerc,triunghi,dreptunghi;   
        }types;
    union {
            struct {
                    int x,y,z;
                }triunghi;
struct{
        int x1,y1,z1,w;
       }dreptunghi;
struct{
        int r,c;
        }cerc;
    } coodinates;
}allgeometricshit[SIZE];

void citire()
{
    int key=1;
    int k=0;
    while(key)
    {
        printf("introdu 1 pentru cerc 2 pentru triunghi 3 pentru dreptunghi 0 pentru out\n");
        scanf("%d",&key);
        if(key==1)
         {
            allgeometricshit[k].types=cerc;
            scanf("%d %d",allgeometricshit[k].coodinates.cerc.r, allgeometricshit[k].coodinates.cerc.c);
         }
        if(key==2)
        {
          allgeometricshit[k].types=triunghi;
          scanf("%d %d %d",allgeometricshit[k].coodinates.triunghi.x,allgeometricshit[k].coodinates.triunghi.y,allgeometricshit[k].coodinates.triunghi.z)
        }
        if(key==3)
        {
           allgeometricshit[k].types=dreptunghi;
        }
        else
        {
            printf("milsugy");
    
        }

}

}

int main()
{
return 0;
}