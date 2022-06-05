#include <stdio.h>
#include <string.h>

struct siswa {
    char nama[100];
    char nim[15];
    int umur;
};

int main () {
    struct siswa Gabriel;    

    strcpy(Gabriel.nama, "Gabriel Cesar Hutagalung");
    strcpy(Gabriel.nim, "11S21010");
    Gabriel.umur = 19;

    printf("Nama    : %s\n", Gabriel.nama);
    printf("NIM     : %s\n", Gabriel.nim);
    printf("Nama    : %d\n", Gabriel.umur);

    return 0;
}