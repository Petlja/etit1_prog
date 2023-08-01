#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int jardi, stope, inci;
    scanf("%d%d%d", &jardi, &stope, &inci);
    int uIncima = ((jardi * 3) + stope) * 12 + inci;
    printf("%d", uIncima);
    return 0;
}