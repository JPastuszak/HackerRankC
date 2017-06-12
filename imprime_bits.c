#include <stdio.h>
#include <stdlib.h>



void imprime_bits(unsigned char byte)
{
    char sbyte[8]="00000000";
    unsigned char mask=0x80;
    int i;
    for(i=0;i<8;i++)
    {
       
        if(byte & mask)
            sbyte[i]='1';
        
        mask=mask>>1;
    }
    
    printf("%s\n", sbyte);
    
    
}



int main()
{
    char v=NULL;
    
    printf("Entre com um valor");
    scanf("%d", &v);
    
    imprime_bits(v);
    
    
    return 1;
}
