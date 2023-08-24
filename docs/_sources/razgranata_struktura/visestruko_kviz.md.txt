# Квиз: Наредба вишеструког гранања

## Питање 1

```{mchoice}
:answer1: switch
:answer2: case
:answer3: break
:answer4: default
:correct: 2

Која се кључна реч у програмском језику C користи за обележавање константи за
које се улази у поједине гране?
```

## Питање 2

```c
1. switch (a) { case 1: b++; break; case 2: b++; break; default: b--; }
2. switch (a) { case 1: case 2: b++; break; b--; }
3. switch (a) { case 1: case 2: b++; break; default: b--; }
4. switch (a) { case 1: case 2: b++; default: b--; }
```

```{mchoice}
:answer1: Наредба 1.
:answer2: Наредба 2.
:answer3: Наредба 3.
:answer4: Наредба 4.
:correct: 1,3

Нека су a и b целобројне променљиве типа int. Kojе су од датих наредби
вишеструког гранања еквивалентне наредби if(a == 1 || a == 2) b++; else b--;?
```

## Питање 3

```c
switch (b) {
case 1: a += 1;
case 2: a += 2; break;
case 3: a += 3;
default: a += 10;
case 4: a += 4;
case 5: a += 5; }
```

<!---
```{dragndrop}
:match_1: за b = 1 ||| a = 3
:match_2: за b = 2 ||| a = 2
:match_3: за b = 3 ||| a = 22
:match_4: за b = 4 ||| a = 9
:match_5: за b = 5 ||| a = 5
:match_6: за b = 6 ||| a = 19
```

Нека су a = 0 и b целобројне променљиве типа int. За задате вредности
променљиве b, одреди вредност променљиве a након извршења наредбе
вишеструког гранања.
-->

## Питање 4

```c
switch (c) {
case 'X': case 'x': printf("Programski ");
case 'Y': case 'y': printf("jezik "); break;
case 'Z': case 'z': printf("C ");
default: printf("Petlja "); break; }
```

<!---
```{dragndrop}
:match_1: за c = y ||| исписаће се jezik
:match_2: за c = W ||| исписаће се Petlja
:match_3: за c = X ||| исписаће се Programski jezik
:match_4: за c = z ||| исписаће се C Petlja
```

Нека је c променљива типа char. За задате вредности променљиве c, одреди шта ће
се исписати на стандардном излазу након извршења датог кода.
-->

## Питање 5

```c
switch (a) {
case 1: case 2: case 4: b -= 1; break;
case 3: b = b + 1; break; }
```

```{mchoice}
:answer1: if (a == (1 || 2 || 4)) b -= 1; else if (a == 3) b = b + 1;
:answer2: if (a == 1 || a == 2 || a == 4) b -= 1; else b = b + 1;
:answer3: if (a == 1 || a == 2 || a == 4) b--; else if (a == 3) b++;
:answer4: if (a != 3) b -= 1; else b = b + 1;
:correct: 3

Нека су a и b целобројне променљиве типа int. Kojа је наредба еквивалентна
датој наредби вишеструког гранања?
```
