#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num, res = 1;
    int e;
    scanf("%lf%d", &num, &e);
    for (int i = 0; i < e; i++)
        res *= num;
    printf("%.5lf", res);
    return 0;
}