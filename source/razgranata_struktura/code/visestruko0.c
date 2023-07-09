#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int dan;
    scanf("%d", &dan);
    if (dan == 1)
        printf("ponedeljak");
    else
        if (dan == 2)
            printf("utorak");
        else
            if (dan == 3)
                printf("sreda");
            else
                if (dan == 4)
                    printf("cetvrtak");
                else
                    if (dan == 5)
                        printf("petak");
                    else
                        if (dan == 6)
                            printf("subota");
                        else
                            if (dan == 7)
                                printf("nedelja");
                            else
                                printf("pogresan unos");
    return 0;
}