# Аритметички оператори

Аритметички оператори извршавају стандардне аритметичке операције над операндима. Делимо их на унарне: унарно плус `+` и унарно минус `-`, и бинарне: сабирање `+`, одузимање `-`, множење `*`, дељење `/` и модул тј. остатак дељења `%`.

## Унарни аритметички оператори

Унарне аритметичке операторе `+` и `-` можемо описати на следећи начин:

```text
op izraz
```

где је `op` унарни оператор `+` или `-`, а `izraz` аритметички израз.

Оба оператора имају приоритет 2 и десну асоцијативност. Унарни `-` испред операнда мења предзнака тог операнда, стим да је негативна вредност нуле и даље нула. Унарни `+` испред операнда не мења предзнак операнда. Ови оператори могу се посматрати као предзнак броја.

Након извршења унарног оператора над операндом, операнд остаје истог типа, стим да се аритметичке операције не извршавају над "малим" подацима типа `char` или `short` све док се не изврши њихова промоција у `int`.

```c
int a = 2, b = -2, res;
res = -a;    // -2
res = +a;    // 2
res = -b;    // 2
res = +b;    // -2
```

## Бинарни аритметички оператори

Бинарне аритметичке операторе: `+`, `-`, `*`, `/` и `%` можемо описати на следећи начин:

```text
izraz op izraz
```

где је `op` бинарни оператор `+`, `-`, `*`, `/` или `%`, а `izraz` са леве и десне стране аритметички израз. Оператори `+` и `-` су приоритета `4`, док су оператори `*`, `/` и `%` приоритета 3. Сви имају леву асоцијативност. На пример:

```c
    int a = 5, b = 4, c = 3, res;
    res = a + b - c;    // (a + b) - c = (5 + 4) - 3 = 9 - 3 = 6
    res = a - b + c;    // (a - b) + c = (5 - 4) + 3 = 1 + 3 = 4
    res = a * b + c;    // (a * b) + c = (5 * 4) + 3 = 20 + 3 = 23
    res = a + b * c;    // a + (b * c) = 5 + (4 * 3) = 5 + 12 = 17
    res = a * b / c;    // (a * b) / c = (5 * 4) / 3 = 20 / 3 = 6
    res = a / b * c;    // (a / b) * c = (5 / 4) * 3 = 1 * 3 = 3
```

Бинарни аритметички оператори врше операције над операндима слично као у математици, стим да у програмском језику C, важе неке специфичности које се тичу типова података и приоритета извршавања оператора.

Приликом дељења двa цела броја оператором `/`, као резултат добија се само цео део броја, док се разломљени део одбацује (врши се целобројно дељење). Остатак целобројног дељења израчунава се дељењем по модулу помоћу оператора `%`. Такође, приликом рачунања остатка целобројног дељења оба операнда морају бити цели бројеви, а предзнак резултата је једнак предзнаку првог операнда. На пример:

```c
int a = 5, b = 2, c = -5, d = -2, res;
res = a / b;    // 2
res = c / b;    // -2
res = a / d;    // -2
res = c / d;    // 2
res = a % b;    // 1
res = c % b;    // -1
res = a % d;    // 1
res = c % d;    // -1
```

Приликом дељења, ако је бар један операнд реалан број и резултат ће бити реалан број.

```c
int a = 2, b = 5;
float c = 2.0, d = 5.0, res;
res = d / a;    // 2.500000
res = b / c;    // 2.500000
```

У математици је све једно да ли напишете `a*b` или `ab`. У програмском језику C oператор `*` не сме се изостављати.
