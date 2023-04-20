#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    long double num, e;
    scanf("%Lf%Lf", &num, &e);
    printf("%.5Lf", powl(num, e));
    return 0;
}