#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("char          : %hhi ... %hhi\n", CHAR_MIN, CHAR_MAX);
    printf("signed char   : %hhi ... %hhi\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char : 0 ... %hhu", UCHAR_MAX);
    return 0;
}