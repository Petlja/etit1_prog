#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    int n = a / b;
    int c = a % b;
    printf("%d %d %d", n, c, b);
    return 0;
}