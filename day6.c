#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[10000];
    int T, j,p,i;

    scanf("%d", &T);

    for(j=0;j<T;j++){


        /*Entrada de Dados*/

        scanf("%s", &S);
        //pares
         for(p=0;p<strlen(S);p++){
            if(p%2==0){
                printf("%c", S[p]);
            }
        }

        printf(" ");

        for(i=0;i<strlen(S);i++){
            if(i%2==1){
                 printf("%c", S[i]);
            }
        }

    printf("\n");
    //memset(S,'',sizeof(char));

    }

    return 0;
}
