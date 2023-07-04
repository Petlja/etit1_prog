# Основни типови података

```{csv-table} Целобројни (и знаковни) типови
:header: >
:    "Тип",  "$[B]$", "Спецификатор", "Опсег", "Макрои опсега", "Суфикс"
:align: center

"`char`", "1", "`%c`", "`-128 .. 127`", "`CHAR_MIN`, `CHAR_MAX`", "н/п"
"`signed char`", "1", "`%c`, `%hhi`", "`-128 .. 127`", "`SCHAR_MIN`, `SCHAR_MAX`", "н/п"
"`unsigned char`", "1", "`%c`, `%hhu`", "`0 .. 255`", "`0`, `UCHAR_MAX`", "н/п"
"`short`, `short int`, `signed short`, `signed short int`", "2", "`%hi`, `%hd`", "`-32768 ... 32767`", "`SHRT_MIN`, `SHRT_MAX`", "н/п"
"`unsigned short`, `unsigned short int`", "2", "`%hu`", "`0 .. 65535`", "`0`, `USHRT_MAX`", "н/п"
"`int`, `signed`, `signed int`", "4", "`%i`, `%d`", "`-2147483648 .. 2147483647`", "`INT_MIN`, `INT_MAX`", "н/п"
"`unsigned`, `unsigned int`", "4", "`%u`", "`0 .. 4294967295`", "`0`, `UINT_MAX`", "`u`, `U`"
"`long`, `long int`, `signed long`, `signed long int`", "4", "`%li`, `%ld`", "`-2147483648 .. 2147483647`", "`LONG_MIN`, `LONG_MAX`", "`l`, `L`"
"`unsigned long`, `unsigned long int`", "4", "`%lu`", "`0 .. 4294967295`", "`0`, `ULONG_MAX`", "`u`, `U`, `l`, `L`"
"`long long`, `long long int`, `signed long long`, `signed long long int`", "8", "`%lli`, `%lld`", "`-9223372036854775808 .. 9223372036854775807`", "`LLONG_MIN`, `LLONG_MAX`", "`ll`, `LL`"
"`unsigned long long`, `unsigned long long int`", "8", "`%llu`", "`0 .. 18446744073709551615`", "`0`, `ULLONG_MAX`", "`u`, `U`, `ll`, `LL`"
```

```{csv-table} Реални типови
:header: >
:    "Тип",  "$[B]$", "Прецизност", "Спецификатор", "Опсег", "Макрои опсега"
:align: center

"`float`", "4", "6", "`%f`, `%F`, `%g`, `%G`, `%e`, `%E`, `%a`, `%A`", "$\pm1.175494\cdot10^{-38}$ $\pm3.402823\cdot10^{38}$", "`FLT_MIN`, `FLT_MAX`"
"`double`", "8", "15", "`%lf`, `%lF`, `%lg`, `%lG`, `%le`, `%lE`, `%la`, `%lA`", "$\pm2.225074\cdot10^{-308}$ $\pm1.797693\cdot10^{308}$", "`DBL_MIN`, `DBL_MAX`"
"`long double`", "16", "18", "`%Lf`, `%LF`, `%Lg`, `%LG`, `%Le`, `%LE`, `%La`, `%LA`", "$\pm3.362103\cdot10^{-4932}$ $\pm1.189731\cdot10^{4932}$", "`DBL_MIN`, `DBL_MAX`"
```
