#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double v0, a;
    scanf("%lf%lf", &v0, &a);
    double t = 60;
    double s = v0 * t + (a * t * t) / 2;
    double v = v0 + a * t;
    printf("%.2lf\n%.2lf", s, v);
    return 0;
}