# Квиз: искакања, прескакања и скокови

## Питање 1

```{mchoice}
:answer1: прекида се извршавање тренутне итерације петље.
:answer2: прекида се извршавање петље.
:answer3: прави се пауза у извршавању програма од једне секунде.
:answer4: прекида се извршавање програма.
:correct: 2

Након извршавања наредбе break; у петљи, ...
```

## Питање 2

```{mchoice}
:answer1: прекида се извршавање тренутне итерације петље.
:answer2: прекида се извршавање петље.
:answer3: прави се пауза у извршавању програма од једне секунде.
:answer4: прекида се извршавање програма.
:correct: 1

Након извршавања наредбе continue; у петљи, ...
```

## Питање 3

```c
int i = 5;
while (1) {
    if (i > 0) {
        printf("%d ", i);
        i--;
        continue;
    }
    else
        break;
}
```

```{mchoice}
:answer1: На стандардном излазу исписаће се 5.
:answer2: На стандардном излазу исписаће се 5 4 3 2 1.
:answer3: Креирана је бесконачна петља која исписује бројеве од 5 ка -∞.
:answer4: Програм ће се срушити јер је креирана бесконачна петља.
:correct: 2

Који ће бити резултат извршавања датог кода?
```

## Питање 4

```c
int a = 0, b = 1;
if (a != b) {
    printf("1");
    goto labela1;
}        
else {
    printf("0");
    goto labela2;
}
labela1: printf("1");
labela2: printf("0");
```

```{mchoice}
:answer1: 11
:answer2: 110
:answer3: 00
:answer4: 010
:correct: 2

Шта ће се исписати на стандардном излазу након извршавања датог кода?
```

## Питање 5

```{mchoice}
:answer1: Коришћење наредбе goto је препоручено парадигмом структурираног програмирања.
:answer2: Коришћење наредбе goto је забрањено у програмском језику C.
:answer3: Коришћење наредбе goto омогућује скакање на произвољно одредиште у програму у оквиру функције.
:answer4: Коришћење наредбе goto омогућује скакање из једне функције на произвољно одредиште у другој функцији.
:correct: 3

Који је од наведених исказа тачан?
```
