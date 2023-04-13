# Тренинг

Извор: [petlja.org](https://petlja.org/biblioteka/r/Zbirka/trening)

Спортиста се на почетку тренинга загрева тако што трчи по ивицама правоугаоног терена дужине `d` и ширине `s`. Написати програм којим се одређује колико метара претрчи спортиста док једном обиђе терен.

## Улаз

У првој линији стандардног улаза се налази целобројна вредност `d` `(0<d≤100)`, а у следећој линији целобројна вредност `s` `(0<s≤100)` које редом представљају дужину и ширину терена изражену у метрима.

## Излаз

Цео број метара које претрчи спортиста док једном обиђе терен.

## Пример

Улаз

```text
50 
25
```

Излаз

```text
150
```

## Решење

Дужина у метрима коју претрчи спортиста док једном обиђе терен једнака је обиму тог терена тј. збиру двоструких вредности дужине и ширине терена изражене у метрима. Према томе, потребно је исписати збир двоструких вредности два учитана броја.

Нуди се решење у којем су декларисане три променљиве `duzina`, `sirina` и `obim` типа `int`:

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int duzina, sirina;
    scanf("%d", &duzina);
    scanf("%d", &sirina);
    int obim = 2 * duzina + 2 * sirina;
    printf("%d", obim);
    return 0;
}
```

## Оптимизација решења

Ако желимо да водимо рачуна о брзини програма и заузећу меморије, онда нема потребе да уводимо трећу променљиву `obim`. Можемо директно да испишемо збир двоструких вредности два учитана броја као аргумент функције `printf()`:

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int duzina, sirina;
    scanf("%d", &duzina);
    scanf("%d", &sirina);
    printf("%d", 2 * duzina + 2 * sirina);
    return 0;
}
```

По аутору задатка `d` и `s` могу да добију вредности од 1 до 100, што значи да резултат не може бити број већи од 400. Због тога нема потребе да се приликом декларације променљивих користи тип `int` и у меморији заузима 4 бајта по променљивој. Исправније би било користити `unsigned short` што у меморији заузима 2 бајта по променљивој - довољно за приказ целобројних вредности од 0 до 65535.

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    unsigned short duzina, sirina;
    scanf("%hu", &duzina);
    scanf("%hu", &sirina);
    printf("%hu", 2 * duzina + 2 * sirina);
    return 0;
}
```

У односу на решење дато на [petlja.org](https://petlja.org/biblioteka/r/Zbirka/trening) "уштедели смо у меморији" 4 бајта за променљиву `obim` и по 2 бајта за променљиве `duzina` и `sirina` - укупно 8 бајтова. Такође, нисмо израчунавали `int obim = 2 * duzina + 2 * sirina;` па исписивали вредност обима, већ смо директно исписали `2 * duzina + 2 * sirina`.