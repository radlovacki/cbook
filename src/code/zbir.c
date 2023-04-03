#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc == 3)
        printf("%d", atoi(argv[1]) + atoi(argv[2]));
    else
        printf("Unesi dva cela broja!");
    return 0;
}