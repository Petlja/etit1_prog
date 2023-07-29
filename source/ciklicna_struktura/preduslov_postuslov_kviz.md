# Квиз: циклуси са предусловом и постусловом

## Питање 1

Који је исказ тачан, ако се искази се односе на `while` петље.

- Петља се извршава све док је управљачки израз једнак нули.
- Петља се користи када је унапред познат број итерација.
- Пре извршавања наредби у петљи, увек се проверава тачност управљачког израза. **ТАЧНО**
- Тело петље ће се извршити бар једанпут.

## Питање 2

Који је исказ тачан, ако се искази се односе на `do-while` петље.

- Петља се извршава све док је управљачки израз једнак нули.
- Петља се користи када је унапред познат број итерација.
- Пре извршавања наредби у петљи, увек се проверава тачност управљачког израза.
- Тело петље ће се извршити бар једанпут. **ТАЧНО**

## Питање 3

Следећи код у програмком језику C...

```c
unsigned num = 11, s = 0;
while (num != 0) {
    if (num & 1) s++;
    num >>= 1;
}
printf("%u", s);
```

- ...исписаће број цифара у бираном запису броја `num`.
- ...исписаће број цифара у декадном запису броја `num`.
- ...исписаће број јединица у декадном запису броја `num`.
- ...исписаће број јединица у бинарном запису броја `num`. **ТАЧНО**

## Питање 4

Следећи код у програмком језику C...

```c
int broj;
do {
    scanf("%d", &broj);
    if (broj & 1)
        printf("%d\n", broj);
} while (broj & 1);
```

- ...исписује унете бројеве, све док се не унесе јединица.
- ...исписује унете јединице, све док се не унесе број различит од један.
- ...исписује унете позитивне бројеве, све док се не унесе негативан.
- ...исписује унете непарне бројеве, све док се не унесе парни. **ТАЧНО**

## Питање 5

Дат је код у програмском језику C.

```c
int n = 10, s = 0;
for (int i = 5; i < n; i++) s += i;
```

Који је код еквивалентан датом коду?

1 **ТАЧНО**

```c
int s = 0, n = 10, i = 5;
while (i < n) s += i++;
```

2

```c
int s = 0, n = 10, i = 5;
while (i < n) s += ++i;
```

3

```c
int s = 0, n = 10, i = 5;
while (i < n) s = i++;
```

4

```c
int s = 0, n = 10, i = 5;
while (i++ < n) s = s + i;
```