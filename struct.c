#include <stdio.h>
#include <stdlib.h>

union orang {
    char nama[100];
    int umur;
};

int main () {
    union orang gabriel = {"Gabriel Hutagalung", 30};
    // strcpy(gabriel.nama, "Gabriel Cesar Hutagalung");
    // gabriel.umur = 19;

    printf("Nama saya %s.\n", gabriel.nama);
    printf("Umur saya %d tahun.\n", gabriel.umur);
    printf("Size of struct %d\n", sizeof(union orang));

    return 0;
}