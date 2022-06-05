#include <stdio.h>
void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n + 1; i++){
      if(arr[i] = i*2 ){
      }
    }
  }

int main() {
  int array[100], n, i, j, total;
  printf("Masukkan banyak elemen: ");
  scanf("%d", &n);

  bubbleSort(array, n);

  printf("Hasil pengurutan sebagai berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i+1]);
  }

  printf("\n");
  total = ((n/2)* (4 + (n-1)*2)); /*rumus aritmatika*/
  printf("Total: %d", total);
  
}