#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    unsigned short duzina, sirina;
    scanf("%hu%hu", &duzina, &sirina);
    printf("%hu", 2 * duzina + 2 * sirina);
    return 0;
}