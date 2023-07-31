#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d %d", x / 5 + 1, x % 5 + 1);
    return 0;
}