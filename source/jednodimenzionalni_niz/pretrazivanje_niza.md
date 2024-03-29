# Претраживање низа

Претраживањем низа проверава се да ли се одређена вредност налази у низу, односно
да ли постоји елемент који задовољава одређени услов и који је његов индекс. За
претраживање низа развијени су разни алгоритми, међу којима се највише користе
алгоритам линеарног (секвенцијалног) претраживања и алгоритам бинарне претраге.
Који ће се од многобројних алгоритама користити, зависи од потребе. Увек би
требало примењивати најефикаснији алгоритам претраге - онај који доводи до
решења са најмањим бројем поређења вредности у поступку претраге.

## Линеарно претраживање

Линеарно претраживање је најједноставније, али често не и најефикасније. Како
само име алгоритма наговештава, до резултата се долази упоређивањем сваког
елемента низа са траженом вредношћу. То значи да је максимални број поређења
једнак броју елемената низа. Погледај следећи
[видео](https://www.youtube.com/watch?v=-PuqKbu9K3U) пре него што започнеш са
решавањем задатка

Напиши програм у програмском језику C којим се са стандардног улаза уноси цео
број `num` типа `int`, проналази први елемент у низу `arr` који има вредност
`num` и на стандардни излаз исписује његов индекс. Ако у низу не постоји
елемент са вредношћу `num` на стандардни излаз исписује се `-1`. Нека је
у програму низ `arr` типа `int` иницијализован са произвољним бројем елемената.

```{literalinclude} code/linear0.c
:language: c
```

Пошто низ може да има више елемената са траженом вредношћу, програм можеш да
модификујеш тако да испише индексе свих елемената који имају вредност `num`:

```{literalinclude} code/linear1.c
:language: c
```

Можеш и да модификујеш програм тако да испише број пронађених елемената који
имају вредност `num`:

```{literalinclude} code/linear2.c
:language: c
```

## Бинарно претраживање

Алгоритам бинарне претраге подразумева претрагу у **сортираном низу**. У сваком
кораку, алгоритам упоређује тражену вредност са вредношћу средишњег члана низа.
Ако се вредности подударају, онда се алгоритам завршава јер је средишњи елемент
тражени елемент, па је тиме пронађен и његов индекс. У супротном, уколико је
тражена вредност мања од вредности средишњег члана, алгоритам се понавља на
леви подниз у односу на средишњи елемент. Ако је тражена вредност већа од
средишњег члана онда се алгоритам примењује на десни подниз. Претрага се на тај
начин понавља све док се не пронађе тражена вредност, односно, док се не
установи да тражена вредност не постоји. Погледај следећи
[видео](https://www.youtube.com/watch?v=iP897Z5Nerk) пре него што започнеш са
решавањем задатка.

Напиши програм у програмском језику C којим се са стандардног улаза уноси цео
број `num` типа `int`, па проналази елемент у низу `arr` који има вредност
`num` и на стандардни излаз исписује његов индекс. Ако у низу не постоји
елемент са вредношћу `num`, на стандардни излаз исписује се `-1`. Нека је у
програму сортиран низ `arr` типа `int` иницијализован са произвољним бројем
елемената.

```{literalinclude} code/binary0.c
:language: c
```

Можеш приметити да алгоритам бинарне претраге захтева много мање поређења (у
односу на алгоритам линеарне претраге), што га чини и много бржим и
ефикаснијим. Међутим, алгоритам бинарне претрге захтева сортиран низ на улазу,
а у пракси низови података често нису сортирани. На пример, уколико желиш да
напишеш програм који проверава да ли ученик има закључену јединицу, низ са
закључним оценама ученика вероватно није сортиран, већ су оцене записане оним
редом којим су записани предмети у дневнику. У наредним лекцијама научићеш како
се сортирају елементи низа у опадајућем или растућем поретку.
