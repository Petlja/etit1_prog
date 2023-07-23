# Унос и приказ карактера

Како је знаковни тип подскуп скупа целобројног типа, све што си научио у
лекцијама о знаковним подацима, односно о приказу и уносу целобројних података,
можеш да примениш и на приказ и унос знаковних података.

У [табели у прилогу](../prilozi/tipovi_podataka.md) можеш видети да је
спецификатор конверзије `%c` спецификатор за знаковни податак типа `char`.

Ако су знаковне променљиве `ana`, `nikola`, `marko` и `jelena` иницијализоване
са првим словима њихових презимена `'S'`, `'P'`, `'R'` и `'M'`, онда можеш
написати програм који ће те податке исписати на стандардни излаз на следећи
начин:

```c
#include <stdio.h>

int main(void)
{
    char ana = 'S', nikola = 'P', marko = 'R', jelena = 'M';
    printf("Ana %c., Nikola %c., Marko %c. i Milica %c.", ana, nikola, marko, jelena);
    return 0;
}
```

што ће на стандардном излазу дати следећи резултат:

```text
Ana S., Nikola P., Marko R. i Milica M.
```

Ако у знаковне променљиве `ana`, `nikola`, `marko` и `jelena` корисник треба да
унесе прво слово презимена, па се касније ти подаци испишу на стандардни излаз,
онда програм може да изгледа овако:

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ana, nikola, marko, jelena;
    printf("Unesi redom prva slova prezimena Ane, Nikole, Marka i Milice:\n");
    scanf("%c %c %c %c", &ana, &nikola, &marko, &jelena);
    printf("Ana %c., Nikola %c., Marko %c. i Milica %c.", ana, nikola, marko, jelena);
    return 0;
}
```

што ће на стандардном излазу дати следећи резултат:

```text
Unesi redom prva slova prezimena Ane, Nikole, Marka i Milice:
S
P
R
M
Ana S., Nikola P., Marko R. i Milica M.
```
