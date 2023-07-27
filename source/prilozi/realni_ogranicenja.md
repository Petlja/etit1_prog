# Провера опсега вредности и прецизности целобројних типова

```{literalinclude} code/floatlimits.c
:language: c
```

## Тест пример са GNU C и Clang C компајлерима

```text
                float           double          long double
Velicina [B]  : 4 B             8 B             16 B
Min.vrednost  : 1.175494E-38    2.225074E-308   3.362103E-4932
Min.prava vr. : 1.401298E-45    4.940656E-324   3.645200E-4951
Max.vrednost  : 3.402823E+38    1.797693E+308   1.189731E+4932
Radiks        : 2               2               2
Signifikand   : 24              53              64
Min.eksponent : -125            -1021           -16381
Max.eksponent : 128             1024            16384
Broj cifara   : 6               15              18
```

## Тест пример са Microsoft C компајлером

```text
                float           double          long double
Velicina [B]  : 4 B             8 B             8 B
Min.vrednost  : 1.175494E-38    2.225074E-308   2.225074E-308
Min.prava vr. : 1.401298E-45    4.940656E-324   4.940656E-324
Max.vrednost  : 3.402823E+38    1.797693E+308   1.797693E+308
Radiks        : 2               2               2
Signifikand   : 24              53              53
Min.eksponent : -125            -1021           -1021
Max.eksponent : 128             1024            1024
Broj cifara   : 6               15              15
```
