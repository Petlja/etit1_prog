#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    double katetaX = fabs(-b / a);
    double katetaY = fabs(b);
    double hipotenuza = sqrt(katetaX * katetaX + katetaY * katetaY);
    double povrsina = katetaX * katetaY / 2;
    double obim = katetaX + katetaY + hipotenuza;
    printf("%.2lf\n%.2lf", povrsina, obim);
    return 0;
}