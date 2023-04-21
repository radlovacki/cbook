#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void update(int *a, int *b)
{
    int tmp = *a;
    *a += *b;
    if (tmp - *b < 0)
        *b -= tmp;
    else
        *b = tmp - *b;
}

int main(void)
{
    int a, b, *pa = &a, *pb = &b;
    scanf("%d%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}