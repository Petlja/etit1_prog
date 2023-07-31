#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const int a = 100;
    int x, y;
    scanf("%d%d", &x, &y);
    int k = (x - 1) / a, v = (y - 1) / a;
    int kvadrat = 3 * v + k + 1;
    printf("%d", kvadrat);
    return 0;
}