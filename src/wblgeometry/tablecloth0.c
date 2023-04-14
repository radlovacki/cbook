#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
    double P, r, O;
    scanf("%lf", &P);
    r = sqrt(P / M_PI);
    O = 2 * r * M_PI;
    printf("%.2lf", O);
    return 0;
}