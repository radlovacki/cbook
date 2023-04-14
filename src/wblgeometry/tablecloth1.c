#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
    double P;
    scanf("%lf", &P);
    printf("%.2lf", 2 * M_PI * sqrt(P / M_PI));
    return 0;
}