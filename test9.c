#include <stdio.h>



int main(){

int n, jumlah = 1;

int i=1;


printf("masukkan sebuah angka :");
scanf("%d", &n);

if(n>0){

printf("%d", i);

while(n>1){

i += 2;

printf(", %d", i);

n--;
jumlah = jumlah + i;}

printf("\n");



printf("Jumlah: %d\n", jumlah);

}

else{
printf("Program hanya menerima bilangan asli. Coba lagi!\n");

return 0;

};

}