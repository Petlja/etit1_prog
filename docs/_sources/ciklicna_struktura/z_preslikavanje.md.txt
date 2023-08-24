# Задаци: Пресликавање серије бројева

Алгоритми и програми у програмском језику C:
[Пресликавање серије бројева](https://petlja.org/biblioteka/r/Zbirka/03%20Iteracija/01%20serije/03%20preslikavanje).

## Прерачунавање миља у километре

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/milje_u_kilometre).

Овај задатак представља класичан пример табелирања дате функције, тј. примене
функције на сваки елемент неке серије бројева (кажемо да се врши *пресликавање
серије*).

У петљи је потребно проћи кроз све бројеве миља из интервала $[a,b]$, са
кораком $k$. То је најлакше урадити помоћу петље `for`. Број километара у
сваком кораку петље добијамо тако што број миља помножимо са `1.609344`.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double km_mi = 1.609344;
    int a, b, k;
    scanf("%d%d%d", &a, &b, &k);
    for (int mi = a; mi <= b; mi += k)
    {
        double km = mi * km_mi;
        printf("%d mi = %.6lf km\n", mi, km);
    }
    return 0;
}
```

:::

## Табелирање функције

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/tabeliranje_funkcije).

Потребно је у петљи обићи све тачке $t$ интервала $[0,T]$. За свако време $t$
израчунавамо пређени пут по формули $s=v_0\cdot t+\frac{a\cdot t^2}{2}$ и
исписујемо га.

Приметимо да се у овом задатку заправо врши табелирање једне (у овом случају
квадратне) функције тј. пресликавање серије бројева.

:::{admonition} Предложено решење задатка
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double v0, a, T, dt;
    scanf("%lf%lf%lf%lf", &v0, &a, &T, &dt);
    for (double t = 0; t <= T; t += dt)
    {
        double s = v0 * t + a * t * t / 2.0;
        printf("%.5lf\n", s);
    }
    return 0;
}
```

:::
