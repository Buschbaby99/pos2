#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv){


/*
    int guess;
    int num = 0;
    
    srand(time(0));
    num = rand() % 100;
    
    printf("Wähle eine Zahl: ");
    scanf("%d", &guess);
    
    if (guess == num)
    {
        printf("Deine Antwort ist richtig!\n");
    } else {
        printf("Deine Antwort ist falsch!\n");
    }
    */

    unsigned char ucAscii;

    ucAscii = '\0';

    printf("Dec Hex Char %c\n", 179);
    printf("----------------\n");

    for (ucAscii = 0; ucAscii < 255; ucAscii++)
    {
        switch (ucAscii)
        {
        case 0:
            printf("%03d | %02x | NULL\n", ucAscii, ucAscii);
            break;
        case 7:
            printf("%03d | %02x | BELL\n", ucAscii, ucAscii);
            break;
        case 8:
            printf("%03d | %02x | BS\n", ucAscii, ucAscii);
            break;
        case 10:
            printf("%03d | %02x | XX\n", ucAscii, ucAscii);
            break;
        case 11:
            printf("%03d | %02x | BS\n", ucAscii, ucAscii);
            break;
        case 12:
            printf("%03d | %02x | BS\n", ucAscii, ucAscii);
            break;
        case 27:
            printf("%03d | %02x | ESC\n", ucAscii, ucAscii);
            break;
        case 127:
            printf("%03d | %02x | DEL\n", ucAscii, ucAscii);
            break;
        default:
            printf("%03d | %02x | %c\n", ucAscii, ucAscii, ucAscii);
            break;
        }
    }

    printf("%03d | %02x | %c\n", ucAscii, ucAscii, ucAscii);

    return 0;
}