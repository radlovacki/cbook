#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num;
	scanf("%lf", &num);
	double sqrt = num / 2;
	double i = 0;
	while (sqrt != i)
	{
		i = sqrt;
		sqrt = (i + (num / i)) / 2;
	}
	printf("%.15lf", sqrt);
	return 0;
}