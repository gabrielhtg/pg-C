#include <stdio.h>

int main () {

    int x, jumlah = 0, i, ganjil = 1, j;

    printf("Masukkan sebuah angka : ");

    scanf("%d", &x);

    if (x > 0) {

        for (i = 0; i < x; i++) {

            printf("%d", ganjil);

            if (i != (x - 1)) {
                printf(", ");
            }

            jumlah =  jumlah + ganjil;
            ganjil = ganjil + 2;
        }
    }

    else {

        printf("Program hanya menerima bilangan asli. Coba lagi!\n");

    }

    printf("\nJumlah: %d\n", jumlah);

    return 0;

}