# Квиз: Једноставна додела и аритметички оператори

## Питање 1

```c
int res = 6 + 5 * 4 + 3;
```

```{mchoice}
:answer1: 29
:answer2: 41
:answer3: 47
:answer4: 77
:correct: 1

Која ће вредност бити додељена променљивој `res`?
```

## Питање 2

```c
int res = 6 + 5 % 4 + 3;
```

```{mchoice}
:answer1: 4
:answer2: 6
:answer3: 10
:answer4: 11
:correct: 3

Која ће вредност бити додељена променљивој `res`?
```

## Питање 3

```c
#include <stdio.h>

int main(void)
{
    double res = 6 + 5 / 4 + 3;
    printf("%.2lf", res);
    return 0;
}
```

```{mchoice}
:answer1: 5.75
:answer2: 6.71
:answer3: 10.00
:answer4: 10.25
:correct: 3

Шта ће се исписати на стандардном излазу након покретања датог програма?
```

## Питање 4

```c
#include <stdio.h>

int main(void)
{
    double res = 6 + 5 / 4. + 3;
    printf("%.2lf", res);
    return 0;
}
```

```{mchoice}
:answer1: 5.75
:answer2: 6.71
:answer3: 10.00
:answer4: 10.25
:correct: 4

Шта ће се исписати на стандардном излазу након покретања датог програма?
```

## Питање 5

```c
#include <stdio.h>

int main(void)
{
    int a = 5, b = 4, c = 3;
    double res = (double)a * b / c;
    printf("%.2lf", res);
    return 0;
}
```

```{mchoice}
:answer1: 5.00
:answer2: 6.00
:answer3: 6.67
:answer4: 7.00
:correct: 3

Шта ће се исписати на стандардном излазу након покретања датог програма?
```
