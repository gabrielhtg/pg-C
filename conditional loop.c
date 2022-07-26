#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int n, i, jumlah = 0, pembagi = 1;
    scanf("%d", &n);

    for (i = 0; i < 5; i++) {
        jumlah = jumlah + (abs(floor(n / pembagi)) % 10);

        pembagi = pembagi * 10;
    }

    printf("%d", jumlah);
    return 0;
}