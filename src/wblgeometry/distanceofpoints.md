# Растојање тачака

Извор: [petlja.org](https://petlja.org/biblioteka/r/Zbirka/rastojanje_tacaka)

Напиши програм који израчунава и исписује растојање између тачака задатих својим координатама.

## Улаз

Са стандардног улаза уносе се четири реална броја, сваки у посебном реду. Прва два броја \\(A_x\\) и \\(A_y\\) представљају координате тачке \\(A = ( A_x, A_y )\\), док друга два броја \\(B_x\\) и \\(B_y\\) представљају координате тачке \\(B = (B_x, B_y)\\).

## Излаз

На стандардни излаз исписати један реалан број који представља растојање између тачака \\(A\\) и \\(B\\), заокружен на пет децимала.

## Пример

Улаз

```text
0
0
1
1
```

Излаз

```text
1.41421
```

## Понуђено решење

Посматрајмо тачку \\(C\\) која има координате \\((B_x, A_y)\\). Троугао \\(ABC\\) је правоугли троугао са правим углом код темена \\(C\\). Тражено растојање између тачака \\(A\\) и \\(B\\) једнако је дужини хипотенузе тог троугла и може се израчунати применом Питагорине теореме која тврди да је квадрат над хипотенузом једнак збиру квадрата над обе катете. Пошто су катете нашег троугла дужи \\(AC\\) и \\(BC\\), важи да је \\(|AB|^2 = |AC|^2 + |BC|^2\\), и да је \\(|AB| = \sqrt{|AC|^2 + |BC|^2}\\). Пошто тачке \\(A\\) и \\(C\\) имају исту \\(y\\)-координату, дужина дужи \\(AC\\) може се израчунати као \\(|B_x - A_x|\\). Заиста, пошто је дуж \\(AC\\) паралелна оси \\(x\\), њена дужина једнака је дужини интервала који представља њену пројекцију на ту осу. То је интервал \\([A_x, B_x]\\) ако је \\(A_x \leq B_x\\) и његова дужина је \\(B_x - A_x\\), тј. интервал \\([B_x, A_x]\\) ако је \\(B_x \leq A_x\\) и његова дужина је \\(A_x - B_x\\). У оба случаја, дужина је једнака апсолутној вредности разлике бројева \\(B_x\\) и \\(A_x\\). Слично, дужина дужи \\(BC\\) може се израчунати као \\(|B_y - A_y|\\). Зато је \\(|AB| = \sqrt{|B_x - A_x|^2 + |B_y - A_y|^2}\\). Приметимо да, пошто је квадрат броја увек позитиван, није неопходно користити апсолутну вредност и важи да је \\(|AB| = \sqrt{(B_x - A_x)^2 + (B_y - A_y)^2}\\).

Подсетимо се, у језику C се квадратни корен може израчунати библиотечком функцијом `sqrt()` декларисаном у заглављу `math.h`.

```c
{{#include distanceofpoints0.c}}
```

Преузми: [distanceofpoints0.c](distanceofpoints0.c)

## Оптимизација решења

Можемо да избегнемо увођење додатних променљивих `dx`, `dy` и `d`, тако што изведену формулу \\(\sqrt{(B_x - A_x)^2 + (B_y - A_y)^2}\\) напишемо као аргумент функције `printf()`.

```c
{{#include distanceofpoints1.c}}
```

Преузми: [distanceofpoints1.c](distanceofpoints1.c)
