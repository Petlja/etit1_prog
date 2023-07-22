# Сортирање елемената низа

Сортирање било којих ставки у односу на неко линерано уређење може да помогне
човеку или рачунару да брзо пронађе жељене ставке, на пример:

- сортирање низа бројева у растућем или опадајућем редоследу,
- лексикографско сортирање низа карактера,
- сортирање листе на основу вредности чланова листе итд.

```{image} images/sort.png
:width: 100%
:align: center
:alt: Сортирање
```

Сортирање елемената низа, тј. сортирање било које структуре података по задатом
критеријуму је изузетно важна тема у програмирању, па се временом развио велики
број алгоритама за сортирање. Неки од познатијих су:

- алгоритам за сортирање избором *(енгл. Selection Sort)*,
- алгоритам за брзо сортирање *(енгл. Quick Sort)*,
- алгоритам за сортирање обједињавањем *(енгл. Merge Sort)*,
- алгоритам за сортирање нагомилавањем *(енгл. Heap Sort)*,
- алгоритам за сортирање уметањем *(енгл. Insertion Sort)*,
- алгоритам за сортирање мехуром *(енгл. Bubble Sort)*,
- алгоритам за сортирање разврставањем *(енгл. Radix Sort)* и многи други

Тема о алгоритмима сортирања је веома широка и изучава сложеност алгоритама,
њихови брзину, заузеће ресурса, стабилност, прилагодљивост и др. Како би
програмери боље сагледали постојеће алгоритме сортирања, настале су поделе
по имплементацији, по методи сортирања, по дизајну парадигме, по сложености
и др.

Већина савремених програмских језика поседује **библиотечке функције** за
сортирање елемената низа. У програмском језику C постоји само једна библиотечка
функција за сортирање елемената низа `qsort()`. Названа је по алгоритму за
брже сортирање низа *(енгл. Quicker Sort)* који је имплементиран у оригиналној
`stdlib.h` библиотеци (алгоритам за брже сортирање је варијанта алгоритма за
брзо сортирање). Библиотечка функција `qsort()` захтева познавање рада са
показивачима и функцијама, па њу нећеш користити у овом курсу.

Могао си до сада да закључиш да примена библиотечких функција може да резултира
краћим и јаснијим (али не увек и ефикаснијим) програмским кодом. У овом
поглављу биће већи изазов да сам имплементираш неки од алгоритама за сортирање
и разумеш функционалност тог алгоритма, него да научиш да позовеш једну
библиотечку функцију.

Један од најједноставнијих алгоритама за сортирање је алгоритам за сортирање
избором. Он је уједно и један од најједноставнијих за запис и имплементацију.
Није ефикасан над великим скуповима података, али може да има предности у
перформансама у односу на компликованије алгоритме у одређеним ситуацијама.
Идеја је да се у првом кораку најмањи елемент постави на прво место, у другом
најмањи од преосталих на друго место и тако редом док се низ не сортира.
Пре него што започнеш са проучавањем и имплементацијом овог алгоритма у
програмском језику C погледај следећи
[видео](https://www.youtube.com/watch?v=Ns4TPTC8whw).