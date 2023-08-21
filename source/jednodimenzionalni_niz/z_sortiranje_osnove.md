# Задаци: Сортирање

Алгоритми и програми у програмском језику C:
[сортирање](https://petlja.org/biblioteka/r/Zbirka/04%20Nizovi/00%20nizovi_vektori_liste/05%20sortiranje_osnove).

## Сортирање бројева

Прочитај [текст задатка](https://petlja.org/biblioteka/r/Zbirka/sortiranje_brojeva).

Овај задатак донекле је решен у лекцији **Сортирање избором**, али због
ограничења задатих задатком, решење *не пролази* све тест примере на Петљи.
Решења која пролазе тест примере користи или напредније алгоритме сортирања или
напредније технике програмирања у програмском језику C или користе једину
библиотечку функцију за рад са низовима `qsort`. Имплементација ове функције,
опет, захтева напредније технике програмирања (рад са функцијама и
показивачима).

:::{admonition} Предложено решење задатка (1)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int poredi(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int n, a[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), poredi);
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}
```

:::

Примена мало сложенијег алгоритма сортирања QuickSort над тест примерима на
Петљи задовољава ограничења задатих задатком.

:::{admonition} Предложено решење задатка (2)
:class: tip

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, a[100000], b[100000], t = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    b[++t] = 0;
    b[++t] = n - 1;
    while (t >= 0)
    {
        int h = b[t--];
        int l = b[t--];
        int p = a[h];
        int i = l - 1;
        for (int j = l; j <= h - 1; j++)
            if (a[j] <= p)
            {
                i++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        int temp = a[i + 1];
        a[i + 1] = a[h];
        a[h] = temp;
        int part = i + 1;
        if (part - 1 > l)
        {
            b[++t] = l;
            b[++t] = part - 1;
        }
        if (part + 1 < h)
        {
            b[++t] = part + 1;
            b[++t] = h;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}
```

:::
