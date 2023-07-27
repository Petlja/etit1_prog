#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    printf("\t\tfloat\t\tdouble\t\tlong double\n");
    printf("Velicina [B]  :\t%llu B\t\t%llu B\t\t%llu B\n", sizeof(float), sizeof(double), sizeof(long double));
    printf("Min.vrednost  :\t%E\t%lE\t%LE\n", FLT_MIN, DBL_MIN, LDBL_MIN);
    printf("Min.prava vr. :\t%E\t%lE\t%LE\n", FLT_TRUE_MIN, DBL_TRUE_MIN, LDBL_TRUE_MIN);
    printf("Max.vrednost  :\t%E\t%lE\t%LE\n", FLT_MAX, DBL_MAX, LDBL_MAX);
    printf("Radiks        :\t%d\t\t%d\t\t%d\n", FLT_RADIX, FLT_RADIX, FLT_RADIX);
    printf("Signifikand   :\t%d\t\t%d\t\t%d\n", FLT_MANT_DIG, DBL_MANT_DIG, LDBL_MANT_DIG);
    printf("Min.eksponent :\t%d\t\t%d\t\t%d\n", FLT_MIN_EXP, DBL_MIN_EXP, LDBL_MIN_EXP);
    printf("Max.eksponent :\t%d\t\t%d\t\t%d\n", FLT_MAX_EXP, DBL_MAX_EXP, LDBL_MAX_EXP);
    printf("Broj cifara   :\t%d\t\t%d\t\t%d\n", FLT_DIG, DBL_DIG, LDBL_DIG);
    return 0;
}