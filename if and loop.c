#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    char angka[20];
    scanf("%d", &n);

    switch (n) {
        case 1 :
            strcpy(angka, "one");
            break;

        case 2 :
            strcpy(angka, "two");
            break;
        
        case 3 :
            strcpy(angka, "three");
            break;

        case 4 :
            strcpy(angka, "four");
            break;

        case 5 :
            strcpy(angka, "five");
            break;

        case 6 :
            strcpy(angka, "six");
            break;

        case 7 :
            strcpy(angka, "seven");
            break;

        case 8 :
            strcpy(angka, "eight");
            break;

        case 9 :
            strcpy(angka, "nine");
            break;
    }

    if (n > 9) {
        strcpy(angka, "Greater than 9");
    }

    printf("%s\n", angka);


    return 0;
}

