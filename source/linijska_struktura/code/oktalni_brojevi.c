#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int c3, c2, c1, c0, n;
    scanf("%d%d%d%d%d", &c3, &c2, &c1, &c0, &n);
    printf("%d\n", c3 * 8 * 8 * 8 + c2 * 8 * 8 + c1 * 8 + c0);
    c0 = (n / (1)) % 8;
    c1 = (n / (8)) % 8;
    c2 = (n / (8 * 8)) % 8;
    c3 = (n / (8 * 8 * 8)) % 8;
    printf("%d%d%d%d", c3, c2, c1, c0);
    return 0;
}