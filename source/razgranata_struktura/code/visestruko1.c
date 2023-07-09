#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int dan;
    scanf("%d", &dan);
    switch (dan)
    {
    case 1: printf("ponedeljak"); break;
    case 2: printf("utorak"); break;
    case 3: printf("sreda"); break;
    case 4: printf("cetvrtak"); break;
    case 5: printf("petak"); break;
    case 6: printf("subota"); break;
    case 7: printf("nedelja"); break;
    default: printf("pogresan unos");
    }
    return 0;
}