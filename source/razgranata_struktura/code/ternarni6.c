#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    printf(num < 0 ? "Manje od 0" : printf(num == 0 ? "Jednako 0" : "Vece od 0"));
    return 0;
}