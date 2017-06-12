#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAM_MAX 6
#define PESO 10

// USEI PONDERAÇÃO ONDE ATRELEI O PESO 10 PARA CADA NOTA
// PEGO O UNIVERSO INTEIRO E GUARDO EM totalNotas;
// Faço o cálculo da pondera assim---> (notaaluno*10)*(totalNotas/(totalnotas*10)) que deve dar em torno de 0,1 para cada


void ordenaNotas(int *notas){
    int ordena[TAM_MAX];
    int maior;
    int i, j, min, swap;

    for (i = 0; i < (TAM_MAX-1); i++){

        min = i;
        for (j = (i+1); j < TAM_MAX; j++) {
            if(notas[j] < notas[min]) {
            min = j;
            }
        }
        if (i != min) {
        swap = notas[i];
        notas[i] = notas[min];
        notas[min] = swap;
        }
    }

}

int main(){

    int notas[TAM_MAX];
    int totalPonderada, auxNota, totalNotas, totalAlunos, totalDoces;
    int i,p;

    printf("Digite as Notas\n");

    for(i=0;i<TAM_MAX;i++){        ///// Leitura das Notas
        scanf("%d", &notas[i]);
        if(notas[i]<=0){
            totalNotas+=1;
        }else{
            totalNotas += notas[i];
        }

    }

    ordenaNotas(notas);

    totalAlunos = TAM_MAX;

     for(i=TAM_MAX-1;i>=0;i--){

        if(i==TAM_MAX-1){
            auxNota = totalAlunos;
        }
        else{
              p = i+1;
            auxNota= auxNota-(notas[p]-notas[i]);
            if(auxNota<=0){auxNota=1;}
        }
        totalDoces +=auxNota;

        printf("O aluno %d  tirou a nota --> %d ele vai receber --> %d Doces \n", i, notas[i], auxNota);

        printf("\n");

    }
   return 0;
}
