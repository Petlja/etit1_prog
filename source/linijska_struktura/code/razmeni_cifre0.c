#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int broj;
    scanf("%d", &broj);
    int c0 = (broj / 1) % 10;
    int c2 = (broj / 100) % 10;
    int broj_r = broj - c0 - c2 * 100 + c2 + c0 * 100;
    printf("%d", broj_r);
    return 0;
}