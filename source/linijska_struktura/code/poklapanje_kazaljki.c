#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int sat;
    scanf("%d", &sat);
    int min = (int)round(60.0 * sat / 11.0);
    printf("%d", min);
    return 0;
}