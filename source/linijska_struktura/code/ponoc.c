#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);
    int S = h * 60 * 60 + m * 60 + s;
    int Sponoc = 24 * 60 * 60;
    int S_do_ponoci = Sponoc - S;
    int s_do_ponoci = (S_do_ponoci / (1)) % 60;
    int m_do_ponoci = (S_do_ponoci / (60)) % 60;
    int h_do_ponoci = (S_do_ponoci / (60 * 60)) % 24;
    printf("%d\n%d:%d:%d", S, h_do_ponoci, m_do_ponoci, s_do_ponoci);
    return 0;
}