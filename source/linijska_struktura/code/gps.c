#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int st, min, sek;
    scanf("%d%d%d", &st, &min, &sek);
    printf("%.5lf", st + min / 60.0 + sek / 3600.0);
    return 0;
}