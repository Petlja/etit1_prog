# Задаци: Лексикографско поређење торки

Алгоритми и програми у програмском језику C:
[лексикографско поређење торки](https://petlja.org/biblioteka/r/Zbirka/02%20Grananje/02%20Ugnezdjeno%20grananje/03%20leksikografsko).

## Пунолетство

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/punoletstvo).

У задатку се захтева поређење два датума - датума који је тачно 18 година након
године рођења и задатог датума у којем се испитује пунолетство. Ако се датуми
представе уређеним тројкама облика $(g,m,d)$ тада се поређење датума своди на
лексикографско поређење ових уређених тројки. Постоје различити начини да се то
уради.

Особа рођена на дан $(d_r,m_r,g_r)$ биће пунолетна (имати пуних $18$ година) на
дан $(d,m,g)$:

- ако је $g_r+18<g$, или;
- ако је $g_r+18=g$, али и $m_r<m$, или;
- ако је $g_r+18=g$ и $m_r=m$, али и $d_r\leq d$.

Дакле, на основу овога могуће је формирати сложени логички израз који одређује
да ли је особа пунолетна.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int d1, m1, g1, d2, m2, g2;
    scanf("%d%d%d%d%d%d", &d1, &m1, &g1, &d2, &m2, &g2);
    if ((g2 > g1 + 18) ||
        (g2 == g1 + 18 && m2 > m1) ||
        (g2 == g1 + 18 && m2 == m1 && d2 >= d1))
        printf("DA");
    else
        printf("NE");
    return 0;
}
```

:::

Постоји могућност да се поређење тројки реализује угнежђеним (хијерархијским)
гранањем којим може да се утврди да ли је прва тројка лексикографски испред
друге, да ли је иза ње или да ли су тројке једнаке. Такво лексикографско
поређење почиње поређењем прве компоненте (у овом случају године). Ако је
година у првом датуму мања од године у другом датуму онда је први датум пре
другог, ако је година у првом датуму већа од године у другом датуму онда је
први датум после другог, а ако су године једнаке, наставља се поређење наредних
компоненти (месеци, евентуално и дана) по истом принципу. Приликом поређења
могуће је постављати вредност променљиве која чува резултат поређења.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int d1, m1, g1, d2, m2, g2, punoletan = 0;
    scanf("%d%d%d%d%d%d", &d1, &m1, &g1, &d2, &m2, &g2);
    if (g2 > g1 + 18)
        punoletan++;
    else if (g2 == g1 + 18)
        if (m2 > m1)
            punoletan++;
        else if (m2 == m1)
            if (d2 >= d1)
                punoletan++;
    if (punoletan)
        printf("DA");
    else
        printf("NE");
    return 0;
}
```

:::

## Бољи у две дисциплине

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/bolji_u_dve_discipline).

Сваки такмичар је представљен уређеним паром бројева (поенима из математике и
програмирања) и потребно је одредти већи од два уређена пара, при чему је
релација поретка међу тим паровима одређена условима задатка (пореди се прво
укупан број поена, па онда поени из програмирања). Ово је класичан пример
релације лексикографског поређења.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m1, p1, m2, p2, pobednik;
    scanf("%d%d%d%d", &m1, &p1, &m2, &p2);
    if ((m1 + p1) > (m2 + p2))
        pobednik = 1;
    else if ((m2 + p2) > (m1 + p1))
        pobednik = 2;
    else if (p2 > p1)
        pobednik = 2;
    else
        pobednik = 1;
    printf("%d", pobednik);
    return 0;
}
```

:::

Поређење се може реализовати и помоћу сложеног логичког израза.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m1, p1, m2, p2, pobednik;
    scanf("%d%d%d%d", &m1, &p1, &m2, &p2);
    if ((m2 + p2) > (m1 + p1) || (m2 + p2) == (m1 + p1) && p2 > p1)
        pobednik = 2;
    else 
        pobednik = 1;
    printf("%d", pobednik);
    return 0;
}
```

:::

## Ко је пре стигао

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/ko_je_pre_stigao).

Најједноставнији начин да се задатак уради је да се оба времена претворе у број
секунди протеклих од почетка дана и да се затим упореди број секунди са три
могућа исхода (најбоље конструкцијом `else-if`).

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int hp, mp, sp, hm, mm, sm;
    scanf("%d%d%d%d%d%d", &hp, &mp, &sp, &hm, &mm, &sm);
    if ((hp * 60 * 60 + mp * 60 + sp) < (hm * 60 * 60 + mm * 60 + sm))
        printf("Pera");
    else if ((hm * 60 * 60 + mm * 60 + sm) < (hp * 60 * 60 + mp * 60 + sp))
        printf("Mika");
    else
        printf("istovremeno");
    return 0;
}
```

:::

Времена могу да се упореде тако што ће се упоредити прво сат, затим, ако је сат
једнак, минут и на крају, ако је и минут једнак онда секунд доласка. Ово је
лексикографско поређење (у овом случају уређених тројки) у којем се прво пореде
почетни подаци, ако су они једнаки прелази се на поређење следећих података и
тако даље.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int hp, mp, sp, hm, mm, sm;
    scanf("%d%d%d%d%d%d", &hp, &mp, &sp, &hm, &mm, &sm);
    if (hp < hm)
        printf("Pera");
    else if (hp > hm)
        printf("Mika");
    else if (mp < mm)
        printf("Pera");
    else if (mp > mm)
        printf("Mika");
    else if (sp < sm)
        printf("Pera");
    else if (sp > sm)
        printf("Mika");
    else
        printf("istovremeno");
    return 0;
}
```

:::
