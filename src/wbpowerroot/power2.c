#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num, res = 1;
    int e;
    scanf("%lf%d", &num, &e);
    while (e > 0)
    {
        if (e % 2 == 1)
        {
            res *= num;
            num *= num;
        }
        else
            num *= num;
        e /= 2;
    }
    printf("%.5lf", res);
    return 0;
}