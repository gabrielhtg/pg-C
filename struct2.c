#include <stdio.h>
#include <stdlib.h>

int main () {
    struct personal {
        long id;
        float gpa;
    };

    struct identity {
        char name[30];
        struct personal person;
    };
    
    struct identity js = {"Mahasiswa"}, *ptr = &js;

    js.person.id = 123456789;
    js.person.gpa = 3.4;
    printf("%s %d %.2f\n", js.name, js.person.id, js.person.gpa);
    printf("%s %d %.2f\n", ptr->name, ptr->person.id, ptr->person.gpa );
    
}
