#include <stdio.h>

int main () {
    int *p, x;

    printf("Masukkan angkanya : ");
    scanf("%d", &x);

    p = &x;

    printf("Address of x    : %d\n", p);
    printf("Size of int     : %d\n", sizeof(int));
    printf("Address of x+1  : %d\n", p + 1);
    return 0;
}