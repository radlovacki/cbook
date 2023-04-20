#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, e;
    scanf("%lf%lf", &num, &e);
    printf("%.5lf", pow(num, e));
    return 0;
}