#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int cifra, tezina = 1, broj = 0;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    scanf("%d", &cifra);
    broj += tezina * cifra;
    tezina *= 10;
    printf("%d", broj);
    return 0;
}