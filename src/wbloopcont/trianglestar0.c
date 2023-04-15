#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int z = 0, r = 1; r <= n;)
    {
        if (z < r)
        {
            printf("*");
            z++;
            continue;
        }
        if (z == r)
        {
            printf("\n");
            r++;
            z = 0;
        }
    }
    return 0;
}