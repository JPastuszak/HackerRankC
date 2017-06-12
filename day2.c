#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float mealCost,tipPercent,taxPercent, totalCost;

    scanf("%f", &mealCost);
    scanf("%f", &tipPercent);
    scanf("%f", &taxPercent);

    totalCost = (mealCost+(mealCost*tipPercent/100.00)+(mealCost*taxPercent/100.00));

    printf("the total mealCost is %0.0f dollars", totalCost);


    return 0;
}
