#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv){

    int a;
    float b;
    double c;
    bool d;
    char input[50];
    long int f;
    long long int g;
    unsigned long int h;
    char string[100];
    short i;

    a = INT_MAX;
    b = FLT_MAX;

    printf("Int eingeben: ");
    scanf("%d", &a);
    printf("%d\n", a);
    printf("float eingeben: ");
    scanf("%f", &b);
    printf("%f\n", b);
    printf("double eingeben: ");
    scanf("%lf", &c);
    printf("%lf\n", c);
    printf("bool eingeben: ");
    scanf("%d", &d);
    printf("%d\n", d);
	printf("char eingeben: ");
	scanf("%s", input);
	printf("%s\n", input);
    printf("long int eingeben: ");
    scanf("%ld", &f);
    printf("%ld\n", f);
    printf("long int eingeben: ");
    scanf("%lld", &g);
    printf("%lld\n", g);
    printf("long int eingeben: ");
    scanf("%lld", &h);
    printf("%lld\n", h);
    printf("string eingeben : ");
    fgets(string, 100, stdin);
    printf("Ihre Eingabe: %s\n",string);
    printf("short eingeben: ");
    scanf("%ld", &h);
    printf("%ld\n", h);


    return 0;
}