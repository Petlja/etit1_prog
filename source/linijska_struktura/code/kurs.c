#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double kupovniEvroDinar, prodajniEvroDinar, kupovniDolarDinar, prodajniDolarDinar;
    scanf("%lf%lf%lf%lf", &kupovniEvroDinar, &prodajniEvroDinar, &kupovniDolarDinar, &prodajniDolarDinar);
    double kupovniEvroDolar = kupovniEvroDinar / prodajniDolarDinar;
    double kupovniDolarEvro = kupovniDolarDinar / prodajniEvroDinar;
    double prodajniEvroDolar = prodajniEvroDinar / kupovniDolarDinar;
    double prodajniDolarEvro = prodajniDolarDinar / kupovniEvroDinar;
    printf("%.4lf\n%.4lf\n%.4lf\n%.4lf", kupovniDolarEvro, prodajniDolarEvro, kupovniEvroDolar, prodajniEvroDolar);
    return 0;
}