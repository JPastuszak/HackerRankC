#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,x,arr_i;

    scanf("%d",&n);
    if(n<1 || n>1000){return 1;}

    int *arr = malloc(sizeof(int) * n);

    for(arr_i = 0; arr_i < n; arr_i++){

        scanf("%d",&arr[arr_i]);

    }
    for(x=n-1;x>=0;x--){

        printf("%d ", arr[x]);

    }


    return 0;
}
