#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double d, v1, v2, vp;
    scanf("%lf%lf%lf%lf", &d, &v1, &v2, &vp);
    double t = (d / 1000) / (v1 + v2);
    double s = (t * 3600) * vp;
    printf("%.2lf", s);
    return 0;
}