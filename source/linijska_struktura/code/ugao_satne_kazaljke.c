#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int alfa, m, h;
    scanf("%d", &alfa);
    int M = alfa * 2;
    h = M / 60;
    m = M % 60;
    printf("%d:%d", h, m);
    return 0;
}