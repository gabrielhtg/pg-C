/* Spesifikasi:
	 Judul/Nama file: Contoh fungsi
	 Contoh penggunaan fungsi dalam program utama.
	 Contoh variabel lokal dan global.
	 Contoh variabel formal dan aktual.
     
   Dibuat oleh: Yaya Setiyadi
   Nama: Yaya Setiyadi
   Tanggal: 17 April 2020.
*/
#include <stdio.h>

//Kamus Global:
int x;
float y;
int FX;
float FY;
//Prototipe fungsi:
float FXY(float, float);
int FX_Kuadrat(int);
             
int main (){
 /* KAMUS */
 int a,b; 
 /*ALGORITMA*/
 scanf("%d %d",&a ,&b);
 FX = FX_Kuadrat(a);
 FY = FXY(a,b);
 
 printf("nilai FX adalah %d \n", FX);
 printf("nilai FY adalah %.2f \n", FY);
 
 printf("nilai FY adalah %.3f \n", FXY(a,b));
 
 getch();
 return 0;
 }

//Uraian body of function:
float FXY(float x, float y){
 return((x*x)+(3*x*y)-(5*y)-1);
}
int FX_Kuadrat(int x){
 return((x*x)+(3*x)-5);
}

