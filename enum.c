#include <stdio.h>

int main () {
    int number[2][2] = {{1, 2}, {3, 4}};
    enum {Gabriel, Miso};
    enum {if1, if2};

    printf("%d size : %d\n", number[Gabriel][if1], sizeof(number[Gabriel][if1]));
}