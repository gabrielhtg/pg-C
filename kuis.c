#include <stdio.h>

int main () {
    int i, j;
    char data1 [2] [3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    char data2 [3] [2];
    char *data = *data2;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            *(data + 2 * j + i) = data1 [i] [j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%c", data2[i][j]);
        }
    }

    printf("\n");

}