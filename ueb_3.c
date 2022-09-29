#include <stdio.h>
#include <ncurses.h>


int main(int argc, char** argv){


    int iFunction_hit;
    int iCursor_hit;
    char cTaste;
    cTaste = '\0';
    iCursor_hit = 0;

    do
    {
        if (_khabit())
        {
            iCursor_hit = iFunction_hit = 0;
            cTaste = _getch();
            printf("%c", cTaste);
            switch (cTaste)
            {
            case -32:
                iCursor_hit = 1;
                break;
            case 0:
                iFunction_hit = 1;
                break;
            default:
                break;
            }

            if(cTaste == -32){
                iCursor_hit = 1;
            }

            if (iCursor_hit == 1 || iFunction_hit == 1)
            {
                cTaste = getch();
                printf("dezimal code = %d\n", cTaste);

                switch (cTaste)
                {
                case 77:
                    printf("CursorLEFT\n");
                    break;
                case 80:
                    printf("CursorDOWN\n");
                    break;
                case 72:
                    printf("CursorLEFT\n");
                    break;
                case 75:
                    printf("CursorUP\n");
                    break;
                case 59:
                    printf("F1\n");
                    break;
                default:
                    if(cTaste >= 60 && cTaste <= 68)
                        printf("F%d\n", cTaste - 58);
                    break;
                }
            }
        }
           
    } while (1);
    
    




    return 0;
}