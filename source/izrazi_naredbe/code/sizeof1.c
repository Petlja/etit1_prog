#include <stdio.h>

int main(void)
{
	int a = 3;
	double b = 3.14;
	printf("%llu", sizeof(a + b));
	return 0;
}