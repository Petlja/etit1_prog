# Задаци: Хијерархија услова

Алгоритми и програми у програмском језику C:
[Хијерархија услова](https://petlja.org/biblioteka/r/Zbirka/02%20Grananje/02%20Ugnezdjeno%20grananje/04%20hijerarhijsko).

## Два броја истог знака

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/dva_broja_istog_znaka1).

*Овај задатак је поновљен у циљу увежбавања различитих техника решавања.*

До решења се могло доћи и угнежђеним (хијерархијским) гранањем, без коришћења
логичких оператора, међутим, такво решење даје веома гломазан програмски кôд и
треба га избегавати.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    if (a > 0)
        if (b > 0)
            i = 1;
        else
            i = 0;
    else
        if (b > 0)
            i = 0;
        else 
            i = 1;
    if (i)
        printf("da");
    else
        printf("ne");
    return 0;
}
```

:::

## Линеарна једначина

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/linearna_jednacina).

Број решења линеарне једначине облика $a\cdot x+b=0$$ зависи од тога да ли су
коефицијенти једнаки или различити од нуле. Ako je

- $a\neq 0$, једначина има јединствено решење $x=-\frac{b}{a}$,
- $a=0$ једначина се своди на једначину $0\cdot x+b=0$, која када је $b\neq 0$
нема решења. Ако је $b=0$ једначина гласи $0\cdot x+0=0$, па је сваки реалан
број њено решење.

Након учитавања бројева могуће је извршити гранање и исписати тражени
резултат.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    if (a != 0.0)
    {
        double x = -b / a;
        printf("%.2lf", x);
    }
    else
        if (b == 0.0)
            printf("BESKONACNO RESENJA");
        else
            printf("NEMA RESENJA");
    return 0;
}
```

:::

## Икс-окс

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/iks_oks1).

*Овај задатак је поновљен у циљу увежбавања различитих техника решавања.*

Можемо засебно одредити ком интервалу припада координата $x$ (гранањем на
основу припадности надовезаним интервалима), а затим у свакој грани одредити
ком интервалу припада координата $y$.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, kvadrat;
    scanf("%d%d", &x, &y);
    if (y <= 100)
        if (x <= 100)
            kvadrat = 1;
        else if (x <= 200)
            kvadrat = 2;
        else
            kvadrat = 3;
    else if (y <= 200)
        if (x <= 100)
            kvadrat = 4;
        else if (x <= 200)
            kvadrat = 5;
        else
            kvadrat = 6;
    else
        if (x <= 100)
            kvadrat = 7;
        else if (x <= 200)
            kvadrat = 8;
        else
            kvadrat = 9;
    printf("%d", kvadrat);
    return 0;
}
```

:::

Пошто је могућих случајева (квадрата) само 9, могуће је и извршити исцрпну
проверу свих могућих случајева. На пример, тачка припада квадрату број 1 ако
важи $1\leq x\leq 100$ и $1\leq y\leq 100$.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, kvadrat;
    scanf("%d%d", &x, &y);
    if (1 <= x && x <= 100 && 1 <= y && y <= 100)
        kvadrat = 1;
    if (101 <= x && x <= 200 && 1 <= y && y <= 100)
        kvadrat = 2;
    if (201 <= x && x <= 300 && 1 <= y && y <= 100)
        kvadrat = 3;
    if (1 <= x && x <= 100 && 101 <= y && y <= 200)
        kvadrat = 4;
    if (101 <= x && x <= 200 && 101 <= y && y <= 200)
        kvadrat = 5;
    if (201 <= x && x <= 300 && 101 <= y && y <= 200)
        kvadrat = 6;
    if (1 <= x && x <= 100 && 201 <= y && y <= 300)
        kvadrat = 7;
    if (101 <= x && x <= 200 && 201 <= y && y <= 300)
        kvadrat = 8;
    if (201 <= x && x <= 300 && 201 <= y && y <= 300)
        kvadrat = 9;
    printf("%d", kvadrat);
    return 0;
}
```

:::

## Квадранти и осе

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/kvadranti_i_ose).

Један начин да се задатак реши је да се употреби угнежђено хијерархијско
гранање, тако што се прво одреди да ли је $x$ координата позитивна, нула или
негативна, а затим, за сваку од тих могућности посебно испита да ли је $y$
координата позитивна, нула или негативна. Испитивање да ли је вредност
позитивна, нула или негативна се најлакше ради конструкцијом `else-if`.

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > 0)
        if (y > 0)
            printf("1. kvadrant");
        else if (y < 0)
            printf("4. kvadrant");
        else
            printf("pozitivni deo x ose");
    else if (x < 0)
        if (y > 0)
            printf("2. kvadrant");
        else if (y < 0)
            printf("3. kvadrant");
        else
            printf("negativni deo x ose");
    else
        if (y > 0)
            printf("pozitivni deo y ose");
        else if (y < 0)
            printf("negativni deo y ose");
        else
            printf("koordinatni pocetak");
    return 0;
}
```

:::

Други начин је да се услов припадности сваком квадранту испита независно (на
пример, услов припадности првом квадранту је да је $x>0$ и $y>0$, а услов
припадности негативном делу $y$-осе је да је $x=0$ и $y<0$).

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
        printf("1. kvadrant");
    if (x > 0 && y < 0)
        printf("4. kvadrant");
    if (x > 0 && y == 0)
        printf("pozitivni deo x ose");
    if (x < 0 && y > 0)
        printf("2. kvadrant");
    if (x < 0 && y < 0)
        printf("3. kvadrant");
    if (x < 0 && y == 0)
        printf("negativni deo x ose");
    if (x == 0 && y > 0)
        printf("pozitivni deo y ose");
    if (x == 0 && y < 0)
        printf("negativni deo y ose");
    if (x == 0 && y == 0)
        printf("koordinatni pocetak");
    return 0;
}
```

:::

## Положај две праве

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/polozaj_dve_prave).

Проблем се своди на решавање система две линеарне једначине са две непознате. У
случају када систем има бесконачно много решења, праве се поклапају, када нема
решења праве су паралелне а када постоји јединствено решење праве се секу и
координате пресечне тачке су управо решење система.

Систем ћемо решавати применом Крамеровог правила. Детерминанту система, $D$,
одређујемо формулом $D=A_1\cdot B_2-A_2\cdot B_1$. Такође, одређујемо и
детерминанте $Dx=-C_1\cdot B_2+C_2\cdot B_1$ и $Dy=-A_1\cdot C_2+A_2\cdot C_1$.

Ако је детерминанта система једнака 0 и

- детерминанте $D_x$ и $D_y$ једнаке 0, онда систем има бесконачно много
решења, тј. праве се поклапају
- бар једна од детерминанти $D_x$ и $D_y$ различита од 0, онда систем нема
решења, односно праве су паралелне

Ако је детерминанта система различита од 0, систем има јединствено решење
$x=\frac{D_x}{D}$, $y=\frac{D_y}{D}$ односно праве се секу у тачки чије су
координате управо одређене решењем система. Приметимо да се дискусија случајева
опет изводи угнежђеним гранањем (прво се провери услов $D=0$, а онда ако је он
испуњен, проверава се услов $D_x=0$ и $D_y=0$).

Након учитавања параметара, можемо израчунати све детерминанте и након тога
анализирати све случајеве и одмах исписивати решења.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double A1, B1, C1, A2, B2, C2;
    scanf("%lf%lf%lf%lf%lf%lf", &A1, &B1, &C1, &A2, &B2, &C2);
    double D = A1 * B2 - A2 * B1;
    double Dx = -C1 * B2 - -C2 * B1;
    double Dy = A1 * -C2 - A2 * -C1;
    if (D == 0)
        if (Dx == 0 && Dy == 0)
            printf("poklapaju se");
        else
            printf("paralelne su");
    else
    {
        printf("seku se\n");
        printf("%.2lf %.2lf", Dx / D, Dy / D);
    }
    return 0;
}
```

:::
