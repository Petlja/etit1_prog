#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, K;
    double p1, p2;
    scanf("%d%d%lf%lf", &N, &K, &p1, &p2);
    double s1 = p1 * (N - K);
    double s2 = p2 * K;
    double prosek = (s1 + s2) / N;
    printf("%.2lf", prosek);
    return 0;
}