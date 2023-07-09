#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int dan;
    scanf("%d", &dan);
    switch (dan)
    {
    case 1: case 2: case 3: case 4: case 5: printf("radni"); break;
    case 6: case 7: printf("neradni"); break;
    default: printf("pogresan unos");
    }
    return 0;
}