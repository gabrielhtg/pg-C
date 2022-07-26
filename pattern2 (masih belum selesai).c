#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int size = (n * 2) - 1;
    int awal = 0, akhir = size - 1, j, i, count = 0, z;
    int urutan[200];

    urutan[count] = n;
  	
    while (count <= size) {
        if (count != urutan[0]) {
            for (i = awal; i <= awal; i++) {
                for (j = awal; j <= akhir; j++) {
                    urutan[count] = n;
                    if ((i == awal) ||(j == awal) || (j == akhir) || (i == akhir)) {
                        printf("%d ", n);
                    }
                }
                
                for (z = count - 1; z >= 0 && count < urutan[0]; z--) {
                    printf("%d ", urutan[z]);
                }

                for (z = size - count - 1; (z >= 0) && (count > urutan[0]); z--) {
                    printf("%d ", urutan[z]);
                }
    
            }
        printf("\n");
        }
        count++;
        
        for (z = 0; (z < count) && (count < urutan[0]); z++) {
            printf("%d ", urutan[z]);
        }

        for (z = 0; z < (size - count) && (count > urutan[0]); z++) {
            printf("%d ", urutan[z]);
        }

        if (count < urutan[0]) {
            n--;
            awal++;
            akhir--;
        }

        else if (count > urutan[0]) {
            n++;
            awal--;
            akhir++;
        }
    }    
    return 0;
}