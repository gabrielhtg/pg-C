#include <stdio.h>

int n;

int fak(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }

    else {
        return n * fak(n - 1);
    }
}


int main () {
    printf("Masukkan angkanya : ");
    scanf("%d", &n);

    printf("Hasil faktorialnya adalah : %d\n", fak(n));
    return 0;
}