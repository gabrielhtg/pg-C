#include <stdio.h>

int main () {
    int jlh, i, input, j, sementara;

    printf("-----------------------------------------------------\n");
    printf("Masukkan banyak angka yang akan diurutkan : ");
    scanf("%d", &jlh);
    printf("-----------------------------------------------------\n");

    int array[jlh];

    for (i = 0; i < jlh; i++) {
        printf("    * Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &input);
        array[i] = input;
    }

    printf("-----------------------------------------------------\n");
    printf("Sebelum diurutkan   : ");

    for (i = 0; i < jlh; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    for (i = 0; i < jlh; i++) {
        for (j = 0; j < jlh - i - 1; j++) {
            if (array[j] >= array[j + 1]) {
                sementara = array[j];
                array[j] = array[j + 1];
                array[j + 1] = sementara;
            }
        }
    }

    printf("Setelah diurutkan   : ");

    for (i = 0; i < jlh; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("-----------------------------------------------------\n");

    return 0;
}