#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double c1, c2, c3;
    scanf("%lf%lf%lf", &c1, &c2, &c3);
    double troskovi1 = c1 / 3;
    double troskovi2 = c1 / 3 + (c2 - c1) / 2;
    double troskovi3 = c1 / 3 + (c2 - c1) / 2 + (c3 - c2);
    printf("%.2lf\n%.2lf\n%.2lf", troskovi1, troskovi2, troskovi3);
    return 0;
}