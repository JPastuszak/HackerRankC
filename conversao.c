
#include <stdio.h>
#include <math.h>
#include <string.h>

#define BINARIO 2
#define HEXA    16
#define DECIMAL 10
#define A       10
#define B       11
#define C       12
#define D       13
#define E       14
#define F       15


//////// FUNÇÕES DE CONVERSÃO ////////////////////////

void convertBinario(char *numeroConverter){

    int i, tamanho;
    tamanho = strlen(numeroConverter);

    for(i=0;i<tamanho;i++){

        printf("%d", ((int)numeroConverter[i]*(pow(10,(tamanho-i)))));
    }
    printf("\n");
    system("PAUSE");
/*
     while(numeroConverter/2>0){

        printf("%d", numeroConverter%BINARIO);
        numeroConverter = numeroConverter/BINARIO;
        if(numeroConverter==0){
            printf("%d", numeroConverter);
        }
     };*/


}

/////////////////////////////////////////////////////


int main(){

    char numero[9];
    int opc;

    do{
        system("cls");
        printf("********* M E N U **************\n");
        printf("* 1 - Decimal x Binario  *******\n");
        printf("* 2 - Binario x Decimal  *******\n");
        printf("* 3 - Decimal x Hexa     *******\n");
        printf("* 4 - Binario x Hexa     *******\n");
        printf("* 5 - Hexa    x Binario  *******\n");
        printf("* 6 - Hexa    x Decimal  *******\n");
        printf("* 7 - S A I D A          *******\n");
        printf("********************************\n");

        printf("Faça sua escolha (1 - 6)....: ");
        scanf("%d", &opc);

        switch(opc){

            case 1:
                printf("Digite o numero Decimal a ser convertido --> :");
                scanf("%s", &numero);
                convertBinario(numero);
                break;
            default:
                printf("Escolha Incorreta\n");

        }
    }while(opc>=1 && opc<7);

    return 0;

}
