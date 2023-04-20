#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(double num, double e)
{
    if (e == 0)
        return 1.0;
    double res = num * power(num, e - 1);
    return res;
}

int main(void)
{
    double num;
    int e;
    scanf("%lf%d", &num, &e);
    printf("%.5lf", power(num, e));
    return 0;
}