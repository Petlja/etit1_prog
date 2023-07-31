#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double v, s;
    scanf("%lf%lf", &v, &s);
    double t = s / v;
    printf("%.2lf", t);
    return 0;
}