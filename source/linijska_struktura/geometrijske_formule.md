# Геометријске формуле

Алгоритми и програми у програмском језику C из
[геометрије и примене геометријских формула](https://petlja.org/biblioteka/r/Zbirka/01%20Aritmetika/01%20Formule/01%20geometrijske%20formule).

## Тренинг

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/trening).

Дужина у метрима коју претрчи спортиста док једном обиђе терен једнака је обиму
тог терена тј. збиру двоструких вредности дужине и ширине терена изражене у
метрима. Према томе, потребно је исписати збир двоструких вредности два учитана
броја.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int duzina, sirina;
    scanf("%d%d", &duzina, &sirina);
    int obim = 2 * duzina + 2 * sirina;
    printf("%d", obim);
    return 0;
}
```

:::

## Лист папира

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/list_papira).

Површина листа папира изражена у квадратним милиметрима једака је производу
висине и ширине тог правоуганика изражених у милиметрима. Према томе, потребно
је исписати производ два учитана броја.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int visina, sirina;
    scanf("%d%d", &visina, &sirina);
    int povrsina = visina * sirina;
    printf("%d", povrsina);
    return 0;
}
```

:::

## Столњак

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/stolnjak).

Пошто је $P=r^2\pi$, из познате површине круга $P$ може да се одреди
полупречник $r$ (на основу везе $r=\sqrt{P/\pi}$). Када је израчунат
полупречник, потребно је да се примени формула за обим круга $O=2r\pi$.

У програмском језику C константа $\pi$ није стандардизована, већ да би се та
константа могла употребити потребно је на почетку програма (пре `include`
директива) навести дефиницију

```c
#define _USE_MATH_DEFINES
```

и тек након ње укључити заглавље `math.h`.

Други начин је, наравно, дефинисање константе у програму

```c
const double PI = 3.14159265359;
```

међутим, поставља се питање броја децимала које је потребно навести (две, три
децимале које ученици знају напамет нису увек довољне).

Алтернатива је да се $\pi$ израчуна коришћењем неких тригонометријских функција
(нпр. као $\arccos(-1)$ или $4\cdot\arctan(1)$).

```c
double PI = acos(-1);
```

или

```c
double PI = 4 * atan(1);
```

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
    double P, r, O;
    scanf("%lf", &P);
    r = sqrt(P / M_PI);
    O = 2 * r * M_PI;
    printf("%.2lf", O);
    return 0;
}
```

:::
