#include <stdio.h>

void printArr(unsigned char v[],unsigned n)
{
    for(int i=0;i<n;i=i+3)
    {
	printf(" 0x%X%X",v[i+1]&0xF,v[i]);
	printf(" 0x%X%X",v[i+2],(v[i+1]>>4)&0xF);
    }
}

int main()
{
    unsigned char v[5]={0x12,0xAB,0xFF,0x25,0x21};
    printArr(v,5);

}