#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned short cena, n, m;
	scanf("%hu%hu%hu", &cena, &n, &m);
	printf("%hu", cena * 10 * (n - m));
	return 0;
}