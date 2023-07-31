#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double v1, v2, t;
    scanf("%lf%lf%lf", &v1, &v2, &t);
    double x = (v1 * t) / (v2 - v1);
    printf("%.2lf", x);
    return 0;
}