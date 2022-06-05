#include <stdio.h>

int reverse (int no) {
    if (no == 0) {
        return 0;
    }

    else {
        while (no > 0) {
            printf("%d,", no);
            no--;
        }
    }
}

int main () {
    int no = 5;
    reverse(no);
    return 0;
}