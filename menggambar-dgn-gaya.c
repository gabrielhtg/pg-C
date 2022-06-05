#include <stdio.h>

int main () {
    int i, j, input;

    printf("Masukkan panjangnya : ");
    scanf("%d", &input);

    for (j = 0; j < input; j++) {
        for (i = 0; i <= j; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}