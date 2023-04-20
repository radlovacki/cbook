#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float num, e;
    scanf("%f%f", &num, &e);
    printf("%.5f", powf(num, e));
    return 0;
}