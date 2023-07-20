#include <stdio.h>

int main(void)
{
	int a = 10, b;
	b = sizeof(a++);
	printf("%d %d", a, b);
	return 0;
}