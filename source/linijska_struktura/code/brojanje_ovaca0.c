#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int j, d, s;
    scanf("%d%d%d", &j, &d, &s);
    int broj_ovaca = s * 25 + d * 5 + j;
    printf("%d", broj_ovaca);
    return 0;
}