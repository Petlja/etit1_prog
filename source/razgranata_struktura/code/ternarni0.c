#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, max;
    scanf("%d%d", &a, &b);
    if (a >= b)
        max = a;
    else
        max = b;
    printf("%d", max);
    return 0;
}