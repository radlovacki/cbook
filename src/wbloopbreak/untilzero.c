#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int broj, zbir = 0;
    while (scanf("%d", &broj) == 1)
    {
        if (broj == 0)
            break;
        else
            zbir += broj;
    }
    printf("%d", zbir);
    return 0;
}