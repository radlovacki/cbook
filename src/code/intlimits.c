#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("short              : %hd ... %hd\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short     : 0 ... %hu\n", USHRT_MAX);
    printf("int                : %d ... %d\n", INT_MIN, INT_MAX);
    printf("unsigned int       : 0 ... %u\n", UINT_MAX);
    printf("long               : %ld ... %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long      : 0 ... %lu\n", ULONG_MAX);
    printf("long long          : %lld ... %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long : 0 ... %llu", ULLONG_MAX);
    return 0;
}