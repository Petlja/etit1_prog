#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m;
    double sn;
    scanf("%d%lf%d", &n, &sn, &m);
    double snm = (n * sn) / (n + m);
    printf("%.2lf", snm);
    return 0;
}