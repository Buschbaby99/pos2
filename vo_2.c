#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *f;
    char str1[10];

    f = fopen("data.txt", "w");

    if(f == NULL)
    {
        printf("Error!");   
        exit(1);             
    }

    fprintf(f, "%s", "Mario");

    fclose(f);


    f = fopen("data.txt", "r");

    if (f == NULL)
    {
        printf("Error!");   
        exit(1);   
    }

    char line[100];
    char name[100];
    
    fgets(line, sizeof(line), f);
    sscanf(line, "%s", &name);

    printf("%s", name);
    

    fclose(f);



    return 0;
}