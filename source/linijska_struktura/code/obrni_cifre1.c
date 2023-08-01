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
    int prefiks = n / 10000;
    printf("%d", 10000 * prefiks + c0 * 1000 + c1 * 100 + c2 * 10 + c3 * 1);
    return 0;
}