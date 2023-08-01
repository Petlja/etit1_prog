#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int prefiks = n / 1000;
    int sufiks = n % 100;
    printf("%d", 100 * prefiks + sufiks);
    return 0;
}