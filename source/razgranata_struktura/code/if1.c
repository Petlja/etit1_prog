#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int broj, apsolut;
    scanf("%d", &broj);
    if (broj >= 0)
        apsolut = broj;
    else
        apsolut = -broj;
    printf("%d", apsolut);
    return 0;
}