#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

#define ICH_DEBUGGE
#define DEBUGLEVEL2
#define MAX_LEN 512

int mybuff(void);



int main(int argc, char** argv){

    int a;
    char cZeichen1 = 'A';
    char cZeichen2 = 'B';
    int iWert = INT_MAX;
    double dbWert = DBL_MAX;
    int anzahlScanf;
    char str[512];

    printf("Zeichen1 eingeben: \n");
    cZeichen1 = getchar();
    mybuff();
    printf("Zeichen2 eingeben: \n");
    cZeichen2 = getchar();
    mybuff();

    printf("Zeichen1 = %c\n", cZeichen1);
    printf("Zeichen2 = %c\n", cZeichen2);

    printf("Geben sie einen int und double durch ; getrennt ein:\n");
    anzahlScanf = scanf("%d;%lf", &iWert, &dbWert);
    printf("Eswurden %d Zahlen eingelsen\n", anzahlScanf);
    printf("%d %lf", iWert, dbWert);

    printf("Geben sie einen beliebigen text ein: \n");
    scanf("%s", str);
    
    printf("%s\n", str);

    return 0;
}


int mybuff(void){

    char cTemp;
    int cnt = 0;

    do{
        cnt++;
        cTemp = getchar();
    #ifdef DEBUGLEVEL2
        printf("Gelöschte Zeichen: char(%d)\n", cTemp);
    #endif
    } while(cTemp != '\n');


#ifdef ICH_DEBUGGE
    printf("DEBUG: gelöschte Zeichen: %d\n", cnt);
#endif

    return cnt;
}