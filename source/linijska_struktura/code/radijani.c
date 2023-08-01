#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
    double radijani;
    scanf("%lf", &radijani);
    int S = (int)round((radijani / M_PI * 180.0) * 3600);
    int sek = (S / 1) % 60;
    int min = (S / 60) % 60;
    int st = (S / (60 * 60)) % 360;
    printf("%d:%d:%d", st, min, sek);
    return 0;
}