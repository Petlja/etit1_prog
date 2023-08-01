#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int c0 = n / 1 % 10;
    int c1 = n / 10 % 10;
    int c2 = n / 100 % 10;
    int c3 = n / 1000 % 10;
    int r = n + 1000 * (c0 - c3) + 100 * (c1 - c2) + 10 * (c2 - c1) + 1 * (c3 - c0);
    printf("%d", r);
    return 0;
}