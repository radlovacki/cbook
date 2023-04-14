#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double ax, ay, bx, by;
    scanf("%lf%lf%lf%lf", &ax, &ay, &bx, &by);
    printf("%.5lf", sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay)));
    return 0;
}