#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int duzina, sirina;
    scanf("%d%d", &duzina, &sirina);
    int obim = 2 * duzina + 2 * sirina;
    printf("%d", obim);
    return 0;
}