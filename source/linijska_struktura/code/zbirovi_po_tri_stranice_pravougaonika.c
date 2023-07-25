#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double n, m;
    scanf("%lf%lf", &n, &m);
    double zbirStranica = (m + n) / 3;
    double O = 2 * zbirStranica;
    double a = m - zbirStranica;
    double b = n - zbirStranica;
    double P = a * b;
    printf("%.2lf\n%.2lf", O, P);
    return 0;
}