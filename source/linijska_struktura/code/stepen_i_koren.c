#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, n;
    scanf("%lf%lf", &x, &n);
    printf("%.5lf\n%.5lf", pow(x, n), pow(x, 1.0 / n));
    return 0;
}