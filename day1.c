#include <stdio.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[]="HackerRank ";

    int ii;
    double dd;
    char ss[100];


    scanf("%d", &ii);
    scanf("%lf\n", &dd);
    scanf("%[^\n]", ss);

    printf("%d\n", i+ii);
    printf("%0.1lf\n", d+dd);
    printf("%s%s", s,ss);

    return 0;

}
