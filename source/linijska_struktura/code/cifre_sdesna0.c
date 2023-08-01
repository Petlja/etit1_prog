#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int c0, c1, c2, c3, c4, c5;
    scanf("%d%d%d%d%d%d", &c0, &c1, &c2, &c3, &c4, &c5);
    int broj = 100000 * c5 + 10000 * c4 + 1000 * c3 + 100 * c2 + 10 * c1 + 1 * c0;
    printf("%d", broj);
    return 0;
}