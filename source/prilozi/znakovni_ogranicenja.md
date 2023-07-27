# Провера опсега вредности знаковног типа

```{literalinclude} code/charlimits.c
:language: c
```

## Тест пример

```text
      Tip      | B |   Opseg
 --------------+---+-----------
 char          | 1 | -128..127
 signed char   | 1 | -128..127
 unsigned char | 1 | 0..255
```
