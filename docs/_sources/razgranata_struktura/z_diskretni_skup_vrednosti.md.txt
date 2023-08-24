# Задаци: Гранање на основу коначног скупа вредности

Алгоритми и програми у програмском језику C:
[Гранање на основу коначног скупа вредности](https://petlja.org/biblioteka/r/Zbirka/02%20Grananje/02%20Ugnezdjeno%20grananje/02%20diskretni_skup_vrednosti).

## Број дана у месецу

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/broj_dana_u_mesecu).

У овом задатку вршимо гранање на основу могућих (дискретних) вредности
променљиве `mesec`. Тај облик гранања најлакше се имплементира наредбом
`switch-case`. У случају месеца фебруара потребно је додатно извршити гранање
на основу тога да ли је година преступна или није. Година је преступна ако је
дељива са 4 и није дељива са 100 или је дељива са 400.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m, g, d = 0;
    scanf("%d%d", &m, &g);
    int p = (g % 4 == 0 && g % 100 != 0) || (g % 400 == 0);
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:d = 31; break;
    case 4: case 6: case 9: case 11:d = 30; break;
    case 2:d = p ? 29 : 28; break;
    }
    printf("%d", d);
    return 0;
}
```

:::

Гранање је могуће остварити помоћу узастопних наредби `if` или још ефикасније
помоћу конструкције `else-if`. Све месеце са истим бројем дана можемо груписати
у исту грану.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m, g, d = 0;
    scanf("%d%d", &m, &g);
    int p = (g % 4 == 0 && g % 100 != 0) || (g % 400 == 0);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        d = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        d = 30;
    else if (m == 2)
        d = p ? 29 : 28;
    printf("%d", d);
    return 0;
}
```

:::

## Назив месеца

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/naziv_meseca).

Потребно је извршити класификацију на основу једне од 12 могућих вредности.

Један начин је да се употреби 12 независних провера услова, међутим, пошто су
услови међусобно искључујући (месец не може истовремено бити и, на пример, 3.
и 5. у години), можемо употребити конструкцију `else-if`, да би се постигло
мало мање испитивања услова, али и да би се човеку који чита програмски кôд
јасно нагласило да ће се извршити тачно једна од 12 грана.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);
    if (m == 1)
        printf("januar");
    else if (m == 2)
        printf("februar");
    else if (m == 3)
        printf("mart");
    else if (m == 4)
        printf("april");
    else if (m == 5)
        printf("maj");
    else if (m == 6)
        printf("jun");
    else if (m == 7)
        printf("jul");
    else if (m == 8)
        printf("avgust");
    else if (m == 9)
        printf("septembar");
    else if (m == 10)
        printf("oktobar");
    else if (m == 11)
        printf("novembar");
    else if (m == 12)
        printf("decembar");
    return 0;
}
```

:::

Један начин да се анализира дискретан скуп вредности је да се употреби наредба
`switch-case`.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);
    switch (m)
    {
    case 1:printf("januar"); break;
    case 2:printf("februar"); break;
    case 3:printf("mart"); break;
    case 4:printf("april"); break;
    case 5:printf("maj"); break;
    case 6:printf("jun"); break;
    case 7:printf("jul"); break;
    case 8:printf("avgust"); break;
    case 9:printf("septembar"); break;
    case 10:printf("oktobar"); break;
    case 11:printf("novembar"); break;
    case 12:printf("decembar"); break;
    }
    return 0;
}
```

:::
