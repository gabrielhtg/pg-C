#include <stdio.h>

// Diberikan 3 array yang acak. Tugasnya adalah menyatukannya sekaligus mengurutkannya.

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

    int temp;
    x = 0;

    while (1) {
        if ((jawaban[x] >= jawaban[x + 1]) && !(jawaban[9] >= jawaban[0 <= 1 <= 2 <= 3 <= 4 <= 5 <= 6 <= 7 <= 8])) {
            temp = jawaban[x];
            jawaban[x] = jawaban[x + 1];
            jawaban[x + 1] = temp;
        }

        else if (jawaban[x] < jawaban[x + 1]) {
            if (x == 9) {
                x = 0;
            }
            
            else {
                x++;
            }

            continue;
        }

        else if (jawaban[1] <= jawaban[2] <= jawaban[3] <= jawaban[4] <= jawaban[5] <= jawaban[6] <= jawaban[7] <= jawaban[8] <= jawaban[9]) {
            break;
        }

        if (x == 9) {
            x = 0;
        }
        x++;
    }

    for (x = 0; x < 10; x++) {
        printf("%d ", jawaban[x]);
    }

    printf("\n");
    return 0;
}