#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a, b, hasil_and = 0, hasil_or = 0, hasil_xor = 0;

    int and;
    int or;
    int xor;
    
    for (a = 1; a <= (n - 1); a++) {
        for (b = 2; b <= n; b++) {
            if ((a == b) || (a > b)) {
                continue;
            }

            and = a & b;
            or = a | b;
            xor = a ^ b;

            if ((and < k) && (and > hasil_and)) {
                hasil_and = and;
            }

            if ((or < k) && (or > hasil_or)) {
                hasil_or = or;
            }

            if ((xor < k) && (xor > hasil_xor)) {
                hasil_xor = xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", hasil_and, hasil_or, hasil_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
