#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%.2f\n%.2f", a + b + sqrtf(a * a + b * b), (a * b) / 2);
	return 0;
}