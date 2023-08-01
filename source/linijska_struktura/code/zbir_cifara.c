#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int broj;
    scanf("%d", &broj);
    int cifraJedinica = (broj / 1) % 10;
    int cifraDesetica = (broj / 10) % 10;
    int cifraStotina = (broj / 100) % 10;
    int cifraHiljada = (broj / 1000) % 10;
    int zbirCifara = cifraJedinica + cifraDesetica + cifraStotina + cifraHiljada;
    printf("%d", zbirCifara);
    return 0;
}