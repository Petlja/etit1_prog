#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double d, v, vk, t1, t2, t;
    scanf("%lf%lf%lf", &d, &v, &vk);
    d /= 1000;
    t1 = d / (vk - v);
    t2 = d / (vk + v);
    t = t1 + t2;
    t *= 60;
    printf("%.2lf", t);
    return 0;
}