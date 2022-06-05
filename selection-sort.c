/* Spesifikasi:
	 Judul/Nama file: selectionSort
     Input (/ IS): 
	 Proses: 
	 Output (/ FS): 
   Dibuat oleh:
   Tanggal:
*/

#include <stdio.h>
/* PROTOTIPE FUNGSI */
void selectionSort(int *T, int N);

/* MAIN FUNCTION */
int main (){
 /* KAMUS */
 int Arr[]={1, 12, 2, 5, 7, 6, 10, 3, 8, 1};
 int i, N=10;
 
  
 /*ALGORITMA*/
 printf("Sebelum sorting: \n");
 for (i=0; i<N; i++){
   printf("%d ", Arr[i]);
 }
 
 printf("\nSorting dengan selection sort. \n"); 
 selectionSort(Arr, N); //call procedure selectionSort.
 
 printf("Setelah sorting: \n");
 for (i=0; i<N; i++){
   printf("%d ", Arr[i]);
 }
 return 0;
 }
 
 /* REALISASI FUNGSI */
 void selectionSort(int *T, int N){
    /* prosedure selectionSort,
	   IS: input sebuah array bilangan integer, dengan data belum terurut.
	   Proses: melakukan sorting dengan algoritma selection sort.
	   FS: data dalam array terurut dari kecil ke besar.
	*/
	
	/* KAMUS */
	int i, temp, pass, Imin;
		
	/*ALGORITMA*/
	 
	for (pass=0; pass<(N-1); pass++){
	    Imin = pass; // Indeks minimum di-inisialisasi sama dengan pass.
		for (i=pass+1; i < N; i++){
		  if (T[Imin] > T[i]) Imin = i; //Mencari lokasi (indeks) dari nilai terkecil.
		}
		// Tahap penukaran (Swap) nilai T[Imin] dengan T[pass]:
		temp = T[Imin];    // langkah 1.
		T[Imin] = T[pass]; // langkah 2.
		T[pass] = temp;    // langkah 3.
	  }
	
 }
