#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(double num, int e)
{
    if (e == 0)
        return 1;
    if (e % 2 == 1)
        return num * power(num, (e - 1) / 2) * power(num, (e - 1) / 2);
    else
        return power(num, e / 2) * power(num, e / 2);
}

int main(void)
{
    double num, res = 1;
    int e;
    scanf("%lf%d", &num, &e);
    printf("%.5lf", power(num, e));
    return 0;
}