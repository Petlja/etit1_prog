#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double racun;
    scanf("%lf", &racun);
    if (racun > 1000)
        racun = racun - (racun * 0.1);
    printf("%.2lf", racun);
    return 0;
}