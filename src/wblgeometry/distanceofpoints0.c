#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double ax, ay, bx, by;
    scanf("%lf%lf%lf%lf", &ax, &ay, &bx, &by);
    double dx = bx - ax, dy = by - ay;
    double d = sqrt(dx * dx + dy * dy);
    printf("%.5lf", d);
    return 0;
}