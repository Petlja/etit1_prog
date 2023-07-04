#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, O, P;
	scanf("%lf%lf", &a, &b);
	c = sqrt(pow(a, 2) + pow(b, 2));
	O = a + b + c;
	P = (a * b) / 2;
	printf("%.2lf\n%.2lf", O, P);
	return 0;
}