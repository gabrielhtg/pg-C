#include<stdio.h>

void quicksort(int array[25],int first,int last){
    int i, j, pivot, temp;
    
    // for (i = pivot + 1; i > ; i++) {
    //     if (array[i] > array[pivot]) {
    //         for (j = i + 1; j <= pivot; j++) {
    //             array[j - 1] = array[j];
    //         }
    //     }
    // }
    
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        
        while(i<j){
            while(array[i]<=array[pivot]&&i<last) {
                i++;
            }
            
            while(array[j]>array[pivot]){
                j--;
            }
            
            if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
      
        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;
        quicksort(array,first,j-1);
        quicksort(array,j+1,last);
   }
}

int main () {
    int i, n;

    printf("-----------------------------------------------------\n");
    printf("Masukkan banyak angka yang akan diurutkan : ");
    scanf("%d",&n);

    int array[n];

    

    for (i = 0; i < n; i++) {
        printf("    * Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("-----------------------------------------------------\n");
    printf("Sebelum diurutkan   : ");


    for (i = 0; i < n; i++) {
        printf(" %d", array[i]);
    }

    printf("\n");

    quicksort(array, 0, n-1);
    
    printf("-----------------------------------------------------\n");
    printf("Setelah diurutkan   : ");
 
    for(i=0;i<n;i++) {
        printf(" %d",array[i]);
    }
    printf("\n");
    
    printf("-----------------------------------------------------\n");

    return 0;
}