#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, a, b;
    scanf("%lf%lf%lf", &x, &a, &b);
    double y = a + x * (b - a);
    printf("%.5lf", y);
    return 0;
}