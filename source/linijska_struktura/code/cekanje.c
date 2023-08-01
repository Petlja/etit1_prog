#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ah, am, as, bh, bm, bs;
    scanf("%d%d%d%d%d%d", &ah, &am, &as, &bh, &bm, &bs);
    int a = ah * 60 * 60 + am * 60 + as;
    int b = bh * 60 * 60 + bm * 60 + bs;
    int c = abs(a - b);
    int s = c % 60;
    int m = (c / 60) % 60;
    int h = c / (60 * 60);
    printf("%d:%d:%d", h, m, s);
    return 0;
}