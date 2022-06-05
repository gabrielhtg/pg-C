#include <stdio.h>

// Diberikan 3 array yang acak. Tugasnya adalah menyatukannya.

int main () {
    int array1[5] = {1, 3, 5, 3, 2};
    int array2[2] = {2, 5};
    int array3[3] = {4, 5, 0};

    // Jawaban
    
    int jawaban[10], x;

    for (x = 0; x < 10; x++) {
        if (x < 5) {
            jawaban[x] = array1[x];
        }

        else if (x < 7) {
            jawaban[x] = array2[x - 5];
        }

        else {
            jawaban[x] = array3[x - 7];
        }

        printf("%d ", jawaban[x]);
    }

    printf("\n");
    return 0;
}