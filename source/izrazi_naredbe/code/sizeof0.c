#include <stdio.h>

int main(void)
{
	printf("%llu\n", sizeof(unsigned char));
	printf("%llu\n", sizeof(unsigned short));
	printf("%llu\n", sizeof(unsigned int));
	printf("%llu\n", sizeof(unsigned long int));
	printf("%llu", sizeof(unsigned long long int));
	return 0;
}