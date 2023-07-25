#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b;
    int p, q;
    scanf("%lf%lf%d%d", &a, &b, &p, &q);
    double k = (b - a) / (p + q);
    double x = a + p * k;
    printf("%.2lf", x);
    return 0;
}