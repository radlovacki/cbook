#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char c;
    printf("Pogodi broj iz 10 pokusaja.\n");
    do
    {
        srand(time(0));
        int x, broj = rand() % 100 + 1, i = 1;
        do
        {
            printf("Pokusaj %d. Unesi broj: ", i);
            scanf("%d", &x);
            if (broj > x)
                printf("Broj je veci od %d.\n", x);
            else if (broj < x)
                printf("Broj je manji od %d.\n", x);
            else
            {
                printf("Pogodak iz %d pokusaja!\n", i);
                break;
            }
            i++;
        } while (i <= 10);
        printf("Da li zelis da pokusas ponovo (D/N): ");
        scanf(" %c", &c);
    } while (c == 'D' || c == 'd');
    return 0;
}