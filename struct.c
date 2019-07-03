//structure is a user-defined data types
struct course {
  int id;
  char title[40];
  float hours;
};
/*each declaration within a structure is called a member
to declare variables of a structure type use*/
struct course s1;
struct course s2 = {2, "john", 3.3f};
//this can also be written as:
s2 = (struct course){2, "john", 35.5f};
//or initialised as below if it has been declared previously
struct course s2;
s2 = {2,"john",3.3};
// you can also initialise according to the member names
// initialising via name can be done in any order
s1 = {.title = "derek", .hours = 40.0f, .id = 1};
//define single members:
s1.id = 1;

// assign one structure to another of the same types
s2 = s1;

// typedef can be used instead of struct to avoid having to keep writting structure
typedef struct {
  int id;
  char title[40];
  float hours;
} course;

course cs1;
course cs2;

//nested structures eg
typedef struct {
  int x;
  int y;
} point;//structure called point

typedef struct {
  float radius;
  point center; //struct circle contains point structure called centre
} circle;

circle c = {4.5, {1, 3}};//nested struct using nested curly brackets
printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);
/* 4.5  1,3 */

//struct ptrs
struct myStruct *struct_ptr; //defines a pointer to the myStruct structure.
struct_ptr = &struct_var; //stores the address of the structure variable struct_var in the pointer struct_ptr.
struct_ptr -> struct_mem; //accesses the value of the structure member struct_mem.
//(*st).age is the same as st->age.

//example
struct student{
  char name[50];
  int number;
  int age;
};
// Struct pointer as a function parameter
void showStudentData(struct student *st) {
  printf("\nStudent:\n");
  printf("Name: %s\n", st->name);
  printf("Number: %d\n", st->number);
  printf("Age: %d\n", st->age);
}
struct student st1 = {"Krishna", 5, 21};
showStudentData(&st1);

/*Structures as Function Parameters
pointer parameters are required.*/
typedef struct {
  int id;
  char title[40];
  float hours;
} course;

void update_course(course *class);
void display_course(course class);

int main() {
  course cs2;
  update_course(&cs2);
  display_course(cs2);
  return 0;
}
