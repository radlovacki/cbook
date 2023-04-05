# Коментари

У изворном коду написаном у програмском језику C можеш поставити коментаре *(енгл. comments)* који се не извршавају као део програма. Коментари дају јасноћу изворном коду и омогућавајући другима да боље разумеју шта је код требало да постигне. Често, коментари могу помоћи и теби да разумеш функционалност сопственог кода којег си давно написао. Коментари су посебно важни у великим пројектима који могу да садрже хиљаде линија изворног кода или у пројектима у којима више програмера раде у тиму. Због свега наведеног писање коментара у изворном коду је веома препоручена пракса.

Стандардни C коментари почињу комбинацијом знакова `/*` и завршавају се комбинацијом знакова `*/`. Компајлер игнорише коментаре - третира један коментар као један нештампајући карактер *(енгл. white-space character)*. Стандардни C коментари могу да садрже било који знак из азбуке језика C, укључујући и знак за нову линију `\n` *(енгл. newline)*. Могу се писати у једној или у више линија.

На пример, ако желиш да у следећем коду објасниш улогу функције `printf()`, можеш написати коментар у једној линији изнад те функције:

```c
#include <stdio.h>

int main(void)
{
	/* Ispis teksta Hello, World! na standardni izlaz */
	printf("Hello, World!");
	return 0;
}
```

или поред те функције

```c
#include <stdio.h>

int main(void)
{
	printf("Hello, World!"); /* Ispis teksta Hello, World! na standardni izlaz */
	return 0;
}
```

Ако је коментар предугачак да би стао у једну линију можеш га написати у више линија:

```c
/*	
 *	Program ispisuje tekst Hello, World! na standardni izlaz (stdout)
 *	koristeci funckiju printf(). Funkcija printf() definisana je u 
 *	biblioteci stdio.h. Pored ispisa teksta, funkcija printf() moze
 *	da sadrzi specifikatore konverzija i dodatne argumente...
 */
#include <stdio.h>

int main(void)
{
	printf("Hello, World!");
	return 0;
}
```

Kоментари се не могу угњежђавати! У следећем примеру, компајлер ће пронаћи грешку у петој линији. Након што је препознао почетак коментара у првој линији `/*` игнорисао је текст све до првог појављивања `*/` у другој линији. Потом је препознао почетак и крај у трећој линији, па почетак и крај у четвртој линији. Крај коментара у петој линији `*/` је вишак и произвешће грешку у изворном коду. 

```c
/* Program ispisuje tekst Hello, World! na standardni izlaz (stdout): 	
    /* Ukljucivanje biblioteke stdio.h */
    /* Definisanje funkcije main() */
    /* Ispis teksta Hello, World! na standardni izlaz */
*/
#include <stdio.h>

int main(void)
{
	printf("Hello, World!");
	return 0;
}
```

У програмском језику C++ уведени су једнолинијски коментари. Једнолинијски коментар почиње знаком `//`, а завршава се крајем линије (који није дефинисан знаком за почетак излазне секвенце `\`). Како су данас сви модерни компајлери и C и C++ компајлери, овакве једнолинијске коментаре можеш користити и у свом C изворном коду.

```c
#include <stdio.h>

int main(void)
{
	// Ispis teksta Hello, World! na standardni izlaz
	printf("Hello, World!");
	return 0;
}
```

или

```c
#include <stdio.h>

int main(void)
{
	printf("Hello, World!"); // Ispis teksta Hello, World! na standardni izlaz
	return 0;
}
```

У оваквим једнолинијским коментарима немој да користиш знак `\` на крају линије. Компајлер у следећем програму неће пронаћи грешку, али ће схватити знак `\` на крају линијског коментара као почетак излазне секвенце, па ће игнорисати и целу следећу линију схвативши је као део коментара.

```c
#include <stdio.h>

int main(void)
{
	// Ispis teksta Hello, World! na standardni izlaz \
	printf("Hello, World!");
	return 0;
}
```