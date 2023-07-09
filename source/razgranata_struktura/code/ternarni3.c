#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    a >= b ? printf("%d", a) : printf("%d", b);
    return 0;
}