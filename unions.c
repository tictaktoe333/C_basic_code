/*A union allows to store different data types in the same memory location.
It is like a structure because it has members.
However, a union variable uses the same memory location for all its members
only one member at a time can occupy the memory location.*/

//declaring a union
union val {
  int int_num;
  float fl_num;
  char str[20];
};

//declaring union variables + assigning one to another
union val u1;
union val u2;
u2 = u1;

// accessing union variables
union val {
  int int_num;
  float fl_num;
  char str[20];
};
union val test;

test.int_num = 123;//overwritten
test.fl_num = 98.76;//overwritten
strcpy(test.str, "hello");//saved

printf("%d\n", test.int_num); //overwritten
printf("%f\n", test.fl_num); //overwritten
printf("%s\n", test.str); // printed

/*Structures With Unions
Unions are often used within structures
a structure can have a member to keep track of which union member stores a value.

Note that the union was declared inside the structure.
When doing this, a union name was required at the END of the declaration.
A union with a union tag could have been declared outside the structure,
but with such a specific use, the union within the struct provides easier to understand the code.
*/

typedef struct {
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
    int id_num;
    char VIN[20];
  } id;//declared here
} vehicle;

vehicle car1;
strcpy(car1.make, "Ford");
car1.model_year = 2017;
car1.id_type = 0;
car1.id.id_num = 123098;
