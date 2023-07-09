# Квиз: Наредба вишеструког гранања

## Питање 1

Која се кључна реч у програмском језику C користи за обележавање константи за
које се улази у поједине гране?

- `switch`
- `case` **ТАЧНО**
- `break`
- `default`

## Питање 2

Нека су `a` и `b` целобројне променљиве типа `int`. Kojе су наредбе вишеструког
гранања еквивалентне наредби `if(a == 1 || a == 2) b++; else b--;`.

1 **ТАЧНО**

```c
switch (a) {
case 1: b++; break;
case 2: b++; break;
default: b--; }
```

2

```c
switch (a) {
case 1: case 2: b++; break;
b--; }
```

3 **ТАЧНО**

```c
switch (a) {
case 1: case 2: b++; break;
default: b--;
}
```

4

```c
switch (a) {
case 1: case 2: b++;
default: b--;
}
```

## Питање 3

Нека су `a = 0` и `b` целобројне променљиве типа `int`. За задате вредности
променљиве `b`, одреди вредност променљиве `a` након извршења наредбе
вишеструког гранања.

```c
switch (b) {
case 1: a += 1;
case 2: a += 2; break;
case 3: a += 3;
default: a = 10;
case 4: a += 4;
case 5: a += 5; }
```

- за `b = 1`, `x =` **3**
- за `b = 2`, `x =` **2**
- за `b = 3`, `x =` **19**
- за `b = 4`, `x =` **9**
- за `b = 100`, `x =` **19**

## Питање 4

Нека је `c` променљиве типа `char`. За задате вредности променљиве `c`, одреди
шта ће се исписати на стандардном излазу након извршења следеће наредбе
вишеструког гранања:

```c
switch (c) {
case 'X': case 'x': printf("Programski ");
case 'Y': case 'y': printf("jezik "); break;
case 'Z': case 'z': printf("C ");
default: printf("Petlja "); break; }
```

- `y` | `jezik`
- `W` | `Petlja`
- `X` | `Programski jezik`
- `z` | `C Petlja`
- **višak** | `Programski jezik C Petlja`
- **višak** | `C`

## Питање 5

Нека су `a` и `b` целобројне променљиве типа `int`. Kojа је наредбa
еквивалентна следећој наредби вишеструког гранања:

```c
switch (a) {
case 1: case 2: case 4: b -= 1; break;
case 3: b = b + 1; break; }
```

- `if (a == (1 || 2 || 4)) b -= 1; else if (a == 3) b = b + 1;`
- `if (a == 1 || a == 2 || a == 4) b -= 1; else b = b + 1;`
- `if (a == 1 || a == 2 || a == 4) b--; else if (a == 3) b++;` **ТАЧНО**
- `if (a != 3) b -= 1; else b = b + 1;`
