# Типови података

Не почетку овог курса написано је да је програмски језик C језик високог нивоа,
да је најближи хардверу и да ће ти програмирање у програмском језику C помоћи
да боље разумеш како функционише хардвер и софтвер рачунара. Подсети се сада
градива из предмета Рачунарство и информатика и дефиниције оперативне меморије.
У оперативној меморији налазе се програми који се тренутно извршавају и подаци
који се при томе користе.

Приликом покретања програма, сам програм и подаци који се у том програму
користе, наћи ће се у оперативној меморији рачунара. Основни типови података
који се користе у програмима написаним у програмском језику C су
**целобројни**, **знаковни** и **реални** тип података. Сви остали типови
података изводе се из ових основних типова. Већ на основу назива типова можеш
да претпоставиш да се подаци целобројног типа користе за представљање целих
бројеви, подаци знаковног типа за представљање знакова, односно карактера и
подаци реалног типа за представљање реалних бројева.

## Чување података у рачунару

У програмском језику C за сваки податак одређеног типа прецизно је дефинисано
колико ће се меморије користити за чување тог податка, односно, прецизно је
дефинисан опсег могућих вредности које податак тог типа може да има. Пошто је
најмања адресибилна јединица оперативне меморије један бајт, количина меморије
која се додељује неком податку изражава се у бајтовима. Када је за чување неког
податка потребно више бајтова, онда је то увек група узастопних бајтова.

Подсети се да се један бајт чини осам бита и да један бит може бити нула или
јединица - једине цифре у бинарном бројевном систему. То значи да се подаци
које ти уносиш *(тзв. **улаз**)* претварају у бројеве у бинарном бројевном
систему ради обраде или чувања у рачунару. Такође, подаци који треба да се теби
прикажу из рачунара *(тзв. **излаз**)*, претварају се из бинарног у бројевни
систем који теби одговара - обично декадни бројевни систем.

На пример, оцена $5$ записана је као позитиван цео број у декадном бројевном
систему и теби је сасвим јасно шта тај податак значи. Да би се тај податак унео
у рачунар у циљу обраде или чувања, биће претворен у бинарни број. Број $5$
може да се представи са 4 бита `0101`, али, како је најмања адресибилна
јединица оперативне меморије један бајт, тај податак се може представити са
`00000101`.

Како се претварају декадни бројеви, које си до сада користио у математици, у
бинарне бројеве, који се користе у рачунару? Овај поступак врши се аутоматски,
али, да би боље разумео како рачунар "посматра" податке, добро је да овај
поступак савладаш и мануелно.

Да би претворио број из декадног у бинарни бројевни систем потребно је да вршиш
целобројно дељење датог броја са $2$ и записујеш остатке све док количник не
буде једнак нули. Остаци записани у супротном редоследу од оног којим су
добијени представљају број у бинарном бројевном систему.

На пример, претвори број $123$ из декадног у бинарни бројевни систем.

$$\frac{123}{2}=61,остатак=1$$
$$\frac{61}{2}=30,остатак=1$$
$$\frac{30}{2}=15,остатак=0$$
$$\frac{15}{2}=7,остатак=1$$
$$\frac{7}{2}=3,остатак=1$$
$$\frac{3}{2}=1,остатак=1$$
$$\frac{1}{2}=0,остатак=1$$
$$123_{(10)}=1111011_{(2)}$$

Да би број преворио из бинарног у декадни бројевни систем, последњу цифру
бинарног броја множи са $2^0$, претпоследњу са $2^1$, следећу са $2^2$ и тако
редом. Збир добијених производа представља број у декадном бројевном систему.

На пример, претвори број $1111011$ из бинарног у декадни бројевни систем.

$$1111011_{(2)}=$$
$$=1\cdot2^{0}+1\cdot2^{1}+0\cdot2^{2}+1\cdot2^{2}+1\cdot2^{4}+1\cdot2^{5}+1\cdot2^{6}=$$
$$=1+2+0+8+16+32+64=$$
$$=123_{(10)}$$

Одмах треба напоменути да количина меморије која се резервише за податке
одређеног типа може да зависи и од рачунарског система и од компајлера! Иако је
програмски језик C стандардизован, стандардни дефишу минималну количину
меморије која се мора резервисати за одређени тип података, док у пракси та
вредност може да буде и већа. То не треба да те брине, јер ће такве разлике у
току овог курса увек бити наглашене.