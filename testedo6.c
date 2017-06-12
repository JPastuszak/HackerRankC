#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAM_MAX 10000

void Imprime(char *vet[TAM_MAX]){

    int p,i;

    for(p=0;p<strlen(vet);p++){  ///////PARES
        if(p%2==0){
            printf("%c", vet[p]);
        }
    }
    printf(" ");
    for(i=0;i<strlen(vet);i++){ /////// ÍMPARES
        if(i%2==1){
            printf("%c", vet[i]);
        }
    }
}
int main() {

    char S[TAM_MAX];
    int T,j;

    scanf("%d", &T);
    for(j=0;j<T;j++){

        scanf("%s", &S);
        Imprime(&S);
        printf("\n");
    }
    return 0;
}

