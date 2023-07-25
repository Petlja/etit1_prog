#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b;
    int p, q;
    scanf("%lf%lf%d%d", &a, &b, &p, &q);
    double x = (b * p + a * q) / (p + q);
    printf("%.2lf", x);
    return 0;
}