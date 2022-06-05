#include <stdio.h>

int main () {
    int x, y, input;

    printf("Masukkan input : ");
    scanf("%d", &input);

    for (y = 0; y < input; y++) {
        if (y == 0 || y == (input - 1)) {
            for (x = 0; x <= (input - 1); x++) {
                printf("*");
            }
        }
        
        else {
            for (x = 0; x < input; x++) {
                if (x == 0 || x == (input - 1)) {
                    printf("*");
                }

                else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
    return 0;
}