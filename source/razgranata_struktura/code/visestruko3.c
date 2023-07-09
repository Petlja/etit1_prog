#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char op;
    double a, b;
    scanf("%lf%c%lf", &a, &op, &b);
    switch (op)
    {
    case '+': printf("%g", a + b); break;
    case '-': printf("%g", a - b); break;
    case '*': printf("%g", a * b); break;
    case '/': printf("%g", a / b); break;
    default: printf("pogresan unos");
    }
    return 0;
}