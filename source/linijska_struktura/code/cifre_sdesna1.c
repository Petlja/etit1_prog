#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int cifra, broj = 0;
    scanf("%d", &cifra);
    broj += 1 * cifra;
    scanf("%d", &cifra);
    broj += 10 * cifra;
    scanf("%d", &cifra);
    broj += 100 * cifra;
    scanf("%d", &cifra);
    broj += 1000 * cifra;
    scanf("%d", &cifra);
    broj += 10000 * cifra;
    scanf("%d", &cifra);
    broj += 100000 * cifra;
    printf("%d", broj);
    return 0;
}