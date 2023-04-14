#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
    double P = fabs(ax * by + bx * cy + cx * ay - ax * cy - cx * by - bx * ay) / 2.0;
    printf("%.5lf", P);
    return 0;
}