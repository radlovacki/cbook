# Аргументи командне линије

Од раније је познато да је најважнија функција у програмском језику C фунцкија `main()`. Она се може дефинисати једноставно - без навођења типа, аргумената+ и вредности коју враћа `main(){}`.

Функција `main()` је функција целобројног типа, јер враћа целобројну вредност процесу оперативног система у којем је програм покренут - `0` ако је програм успешно извршен, односно цео број различит од нуле ако је било проблема током извршавања програма. Ако се функцији `main()` не прослеђују аргументи, онда се у загради може навести кључна реч `void`.  

```c
int main(void)
{
	return 0;
}
```

Аргументи се могу проследити функцији `main()` путем процеса оперативног система у којем је програм покренут, што је обично командна линија.

```c
int main(int argc, char *argv[])
{
    return 0;
}
```
