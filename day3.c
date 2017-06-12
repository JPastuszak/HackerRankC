#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
    int N;

    do{

        scanf("%d", &N);

    }while(N<1 || N>100);

    if(N%2!=0){
        printf("WIRED");
    }
    else{

        if((N>=2 && N<5) || (N>20)){
            printf("NOT WIRED");
        }else {
            printf("Wired 6-20");
        }

    }


    return 0;

}
