# Структура програма

Структура типичног програма у програмском језику C има следећи облик:

```text
Директиве препроцесора
Спољне декларације и дефиниције
main()
{
        Дефиниције и декларације
        Извршне наредбе
}
Дефиниције функција
```

Сврха препроцесора је да у припремној фази компајлирања програма обради
директиве, односно, наредбе препроцесора. Претпроцесор омогућује да се
програмски кôд организује у више датотека и да се дефинишу симболичке
константе. Све директиве препроцесора почиљу карактером `#` и морају се писати
у посебним редовима.

У сваком програму користиће се директива `#include <ime_datoteke.h>` која служи
за прикључивање предефинисаних програмских кодова из системских датотека из
директоријума `include`. У сваком програму писаће се директива
`#include <stdio.h>` која програму прикључује програмски код стандардног
улаза/излаза *(енгл. standard input output)*.

Ако желимо да користимо програмски кôд који смо сами написали у другој датотеци
и снимили у директоријуму у којем је снимљен и наш програм, уместо угластих
заграда, име датотеке пише се под наводницима, па ће таква директива имати
облик `#include "ime_datoteke.h"`.

Директива `#define` служи за дефинисање симболичких константи, односно за
замену макроа симболичким константама. Пише се у два облика:
`#define IME_MAKROA vrednost` или `#define IME_MAKROA (izraz)`. У програму се
може поништити деловање директиве `#define` директивом `#unfdef IME_MAKROA`.

Под спољним декларацијама и дефиницијама изнад функције `main()` и под
дефиницијама функција испод ње, подразумева се придруживање имена и додељивање
меморије подацима или функцијама (потпрограмима).

Функција која се позива приликом покретања програма зове се `main` и
најједноставније се записује овако:

```c
main()
{

}
```

Функција `main` је целобројног типа `int` и враћа целобројну вредност процесу
оперативног система у којем је програм покренут: ако је програм успешно извршен
враћа `0`, а у супротном, ако је било проблема током извршавања, враћа цео број
различит од нуле. Због тога се обично у функцији `main` у последњој линији
налази наредба `return 0;`. Њена улога је да прекине извршавање програма и
процесу оперативног система у којем је програм покренут врати нулу. Тај процес
је обично командна линија (Command Prompt или PowerShell у оперативном систему
Windows).

```c
int main()
{
    
    return 0;
}
```

Између карактера `(` и `)` након назива функције наводе се аргументи функције.
Аргументи функције преносе функцији неке вредности. Aко функција `main` нема
аргументе, *правилнији* запис био би овакав:

```c
int main(void)
{

    return 0;
}
```

Ако функција `main` има аргументе (`argc` и `argv`) онда се записује овако:

```c
int main(int argc, char *argv[])
{

    return 0;
}
```

или овако:

```c
int main(int argc, char **argv[])
{

    return 0;
}
```

Више о аргументима функције `main` и функцијама уопште у поглављу
[Функције](./functions.md).

Једноставан програм у програмском језику C који на стандардни излаз исписује
текст `Hello, World!` изгледао би овако:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!");
    return 0;
}
```

Шта се дешава када се изврши овај програм?

- У припремној фази компајлирања, захваљујући препроцесоркој директиви
`#include <stdio.h>` програму су прикључени програмски кодови стандардног
улаза/излаза, па компајлер *зна* како да протумачи функцију `printf` у функцији
`main`.
- Након тога, почиње извршавање кода у функцији `main`.
  - У првој линији функција `printf` исписује текст `Hello, World!` на
  стандардни излаз.
  - У другој линија наредба `return` прекида извршавање функције `main` и враћа
  процесу оперативног система вредност `0`.