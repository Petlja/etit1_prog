#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double  t;
    scanf("%lf", &t);
    if (t <= 0)
        printf("cvrsto");
    else
        if (t >= 100)
            printf("gasovito");
        else
            printf("tecno");
    return 0;
}