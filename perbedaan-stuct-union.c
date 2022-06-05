
// C program to illustrate differences
// between structure and Union
#include <stdio.h>
#include <string.h>
  
// declaring structure
struct struct_example
{
    int integer;
    float decimal;
    char name[20];
};
  
// declaring union
  
union union_example
{
    int integer;
    float decimal;
    char name[20];
};
  
void main()
{
    // creating variable for structure
    // and initializing values difference
    // six
    struct struct_example s={18,38,"Gabriel"};
  
    // creating variable for union
    // and initializing values
    union union_example u={18,38,"Gabriel"};
  
          
    printf("Struktur data :\n    - Integer: %d\n"
                "    - decimal: %.2f\n    - name: %s\n",
                s.integer, s.decimal, s.name);
    printf("\nUnion data:\n    - Integer: %d\n"
                 "    - Decimal: %.2f\n    - Name: %s\n",
                u.integer, u.decimal, u.name);
  
  
    // difference two and three
    printf("\nSize of structure : %d\n", sizeof(s));
    printf("Size of union : %d\n", sizeof(u));
      
    // difference five
    printf("\nAccessing all members at a time:\n");
    s.integer = 183;
    s.decimal = 90;
    strcpy(s.name,"Gabriel");
      
    printf("    - Structure data:\n        integer: %d\n "
                "       decimal: %.2f\n        name: %s\n",
            s.integer, s.decimal, s.name);
      
    u.integer = 183;
    u.decimal = 90;
    strcpy(u.name, "Gabriel");
      
    printf("\n    - Union data:\n        integer: %d\n "
                "       decimal: %.2f\n        name: %s\n",
            u.integer, u.decimal, u.name);
      
    printf("\nAccessing one member at time:");
      
    printf("\n    - Structure data:");
    s.integer = 240;
    printf("\n        Integer: %d", s.integer);
      
    s.decimal = 120;
    printf("\n        Decimal: %f", s.decimal);
      
    strcpy(s.name, "C programming");
    printf("\n        Name: %s\n", s.name);
      
    printf("\n   - Union data:");
    u.integer = 240;
    printf("\n        Integer: %d", u.integer);
      
    u.decimal = 120;
    printf("\n        Decimal: %f", u.decimal);
      
    strcpy(u.name, "C programming");
    printf("\n        Name: %s\n", u.name);
      
    //difference four
    printf("\nAltering a member value:\n");
    s.integer = 1218;
    printf("    - Structure data:\n        Integer: %d\n "
                "       Decimal: %.2f\n        Name: %s\n\n",
                s.integer, s.decimal, s.name);
      
    u.integer = 1218;
    printf("    - Union data:\n       Integer: %d\n"
           "        Decimal: %.2f\n        Name: %s\n",
            u.integer, u.decimal, u.name);
}