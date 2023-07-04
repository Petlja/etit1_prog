#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	double c = sqrt(pow(a, 2) + pow(b, 2));
	double O = a + b + c;
	double P = (a * b) / 2;
	printf("%.2lf\n%.2lf", O, P);
	return 0;
}