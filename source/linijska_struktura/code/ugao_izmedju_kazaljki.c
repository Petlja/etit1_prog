#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int sat, min;
    scanf("%d%d", &sat, &min);
    sat %= 12;
    int u_sat = sat * 30 * 60 + min * 30;
    int u_min = min * 360;
    int u_izmedju = abs(u_sat - u_min);
    int u_izmedju_stepeni = u_izmedju / 60;
    int u_izmedju_minuti = u_izmedju % 60;
    printf("%d:%d", u_izmedju_stepeni, u_izmedju_minuti);
    return 0;
}