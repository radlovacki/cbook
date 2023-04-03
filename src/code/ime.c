#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 3)
        printf("Moras uneti ime i prezime!");
    else if (argc == 3)
        printf("Ti se zoves: %s. Ti se prezivas: %s.", argv[1], argv[2]);
    else
        printf("Unesi samo ime i prezime!");
    return 0;
}