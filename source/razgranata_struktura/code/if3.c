#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int godine;
    scanf("%d", &godine);
    if (godine > 12 && godine < 20)
        printf("Jeste tinejdzer");
    else
        printf("Nije tinejdzer");
    return 0;
}