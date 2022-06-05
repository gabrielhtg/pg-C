#include <stdio.h>

int main () {
    int x = 0, negatif = 0, positif = 0, total = 0;

    printf("-------------------------------\n");

    while (total < 20) {
        printf("Masukkan angkanya : ");
        scanf("%d", &x);

        total = total + x;

        if (x < 0) {
            negatif++;
        }

        else if (x >= 0 && x < 20) {
            positif++;
        }
    }

    printf("-------------------------------\n");
    printf("Bil Negatif     : %d\n", negatif);
    printf("Bil Positif     : %d\n", positif);   
    printf("Tot Nilai       : %d\n", total);
    printf("-------------------------------\n");

    return 0;
}