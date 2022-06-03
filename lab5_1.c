/*#include <stdio.h>
#include <ctype.h>

void binarymaker(int n)
{

    int i,k=0;
    for(i=sizeof(n)*8-1;i>=0;i--)
    {
	k++;
	if((n&(1<<i))==0)
	{
	    putchar('0');
	}
	else if((n&(1<<i))!=0)
	{
	    putchar('1');
	}
	if(k==4)
	{
	    printf(" ");
	    k=0;
	}
    }

}

int main()
{
    int c;
    if(c<)
    binarymaker(12<<28);

}
/

#include <stdio.h>

unsigned getNibble(unsigned n,unsigned p){

    unsigned mask = 0xFu;
    unsigned nibble = 0;
    printf("%x\n",p);
    nibble = (n&(mask<<p))>>p;
    return nibble;
}

unsigned swapNibbles(unsigned n){
    unsigned new = 0;
    unsigned nibble;
    for(unsigned i=0;i<(sizeof(n)*8);i=i+4){
        nibble = getNibble(n,i);
        new = (new<<4) + nibble;
    }
    return new;
}

/*int main(void) {
    printf("0x%x",swapNibbles(5293852));
    return 0;

}

int main()
{
getNibble(12,4);
}
*/

#include <stdio.h>

unsigned count(unsigned n)
{
        unsigned count=0;
        while(n)
        {
                count+=n&1;
                n>>=1;
        }
        return count;
}

int main()
{
        int i=8;
        printf("%u\n",count(i));

        return 0;
}

