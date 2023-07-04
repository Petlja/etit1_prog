#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cena, n, m;
	scanf("%d%d%d", &cena, &n, &m);
	printf("%d", cena * 10 * (n - m));
	return 0;
}