#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int c0 = n % 10; n /= 10;
    int c1 = n % 10; n /= 10;
    int c2 = n % 10; n /= 10;
    int c3 = n % 10; n /= 10;
    n = 10 * n + c0;
    n = 10 * n + c1;
    n = 10 * n + c2;
    n = 10 * n + c3;
    printf("%d", n);
    return 0;
}