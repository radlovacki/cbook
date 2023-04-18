#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tgmath.h>

int main(void)
{
	long double num;
	scanf("%Lf", &num);
	printf("%.15Lf", sqrtl(num));
	return 0;
}