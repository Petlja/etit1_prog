#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, max;
    scanf("%d%d", &a, &b);
    max = a >= b ? a : b;
    printf("%d", max);
    return 0;
}