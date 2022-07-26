#include <stdio.h>
int main(){
    int x, p, total = 0, genap = 2;
    printf("Masukkan banyak bilangan genap : ");
    scanf("%d", &p);
    if(p > 0){
        for
        (x = 0; x < p; x++){
            printf("%d", genap);
            if(x != (p - 1)){
                printf(" , ");
            }
            total = total + genap;
            genap = genap + 2;    
        }
        printf("\n");
        printf("Total : %d\n", total);
    }
    else{
        printf("Program hanya menerima bilangan bulat positif. coba lagi!\n");

        return 0;
    }
}