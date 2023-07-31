#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double v1, v2, t, d;
    scanf("%lf%lf%lf%lf", &v1, &v2, &t, &d);
    double s1 = v1 * t;
    double s2 = v2 * t;
    double x = s2 - s1 + d;
    printf("%.2lf", x);
    return 0;
}