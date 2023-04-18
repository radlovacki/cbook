# Кључне речи

Кључне речи (резервисане речи, службене речи) имају тачно дефинисано значење и
изведене су од речи на енглеском језику. Са њиховим значењем упознаваћемо се
током рада. Према првом стандарду језика било их 32, а према последњем
стандарду из 2018. године има их 44:

```text
auto            break           case            char
const           continue        default         do
double          else            enum            extern
float           for             goto            if
inline          int             long            register
restrict        return          short           signed
sizeof          static          struct          switch
typedef         union           unsigned        void
volatile        while           _Alignas        _Alignof
_Atomic         _Bool           _Complex        _Generic
_Imaginary      _Noreturn       _Static_assert  _Thread_local
```

Без обзира који се C компајлер користи и који стандард тај компајлер подржава,
ове кључне речи се смеју користити као идентификатори. На пример, функција коју
дефинише програмер не сме назвати `do`, или промељива коју дефинише не сме
назвати `default`, итд.
