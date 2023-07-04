#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cena, n, m;
	scanf("%d%d%d", &cena, &n, &m);
	int prodatogajbi = n - m;
	int prodatotresanja = 10 * prodatogajbi;
	int zarada = cena * prodatotresanja;
	printf("%d", zarada);
	return 0;
}