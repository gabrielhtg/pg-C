#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gtk/gtk.h>

int main () {
    int x, y;

    printf("Masukkan x : ");
    scanf("%d", &x);
    printf("Masukkan y : ");
    scanf("%d", &y);

    double hasil = ((pow(x, 2) - (2 * (x * y))) - pow(y, 2)) / (pow(x,2) + pow(y, 2));

    printf("Hasilnya adalah : %0.2lf\n", hasil);
    return 0;
}
