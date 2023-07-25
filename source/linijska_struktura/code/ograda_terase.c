#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    double d, s, r;
    scanf("%lf%d%lf", &d, &n, &s);
    r = (d * 100 - n * s) / (n + 1);
    printf("%.2lf", r);
    return 0;
}