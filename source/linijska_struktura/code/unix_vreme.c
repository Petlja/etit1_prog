#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int p_dan, p_sat, p_min, p_sek, p_mili, trajanje;
    scanf("%d%d%d%d%d%d", &p_dan, &p_sat, &p_min, &p_sek, &p_mili, &trajanje);
    int pocetak = (((p_dan * 24 + p_sat) * 60 + p_min) * 60 + p_sek) * 1000 + p_mili;
    int kraj = pocetak + trajanje;
    int k_mili = (kraj / 1) % 1000;
    int k_sek = (kraj / 1000) % 60;
    int k_min = (kraj / (1000 * 60)) % 60;
    int k_sat = (kraj / (1000 * 60 * 60)) % 24;
    int k_dan = (kraj / (1000 * 60 * 60 * 24));
    printf("%d:%d:%d:%d:%d", k_dan, k_sat, k_min, k_sek, k_mili);
    return 0;
}