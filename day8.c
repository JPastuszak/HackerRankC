#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, j, encontrou;
    long n;

    encontrou = 0;

    struct phoneBook{
        char nome[100];
        char phone[20];
    };

    struct pesquisa{
        char nome[100];
    };
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d", &n);
    struct phoneBook *pbook = malloc(sizeof(long)* n);
    struct pesquisa *pesq = malloc(sizeof(long)*n);

    for(i=0;i<n;i++){

        scanf("%s%s", &pbook[i].nome, &pbook[i].phone);
    }

    for(i=0;i<n;i++){

        scanf("%s", &pesq[i].nome);
    }

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if(strcmp(pesq[i].nome,pbook[j].nome)==0){
                encontrou=1;
                printf("%s=%s\n", pbook[i].nome, pbook[i].phone);

            }

        }
        if(encontrou==0){
            printf("Not found\n");
        }else {
            encontrou=0;
        }


    }

    return 0;
}
