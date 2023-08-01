#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double s, v1, v2;
    scanf("%lf%lf%lf", &s, &v1, &v2);
    double  t = s / fabs(v1 - v2);
    int ts = (int)round(t * 3600);
    int sek = ts % 60;
    int min = (ts / 60) % 60;
    int sat = ts / (60 * 60);
    printf("%d\n%d\n%d", sat, min, sek);
    return 0;
}