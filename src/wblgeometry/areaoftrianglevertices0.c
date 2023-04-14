#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
    double a = sqrt((cx - bx) * (cx - bx) + (cy - by) * (cy - by));
    double b = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
    double c = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
    double s = (a + b + c) / 2;
    double P = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.5lf", P);
    return 0;
}