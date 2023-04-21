#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, a1 = 0, b1 = 0;
    scanf("%d%d", &a, &b);
    a1 = a;
    b1 = b;
    while (a1 >= 10)
        a1 /= 10;
    while (b1 >= 10)
        b1 /= 10;
    if (a1 > b1 || ((a1 == b1) && (a > b)))
        printf("%d", a);
    else
        printf("%d", b);
    return 0;
}