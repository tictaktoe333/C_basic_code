//void pointer can refer to any address type in memory and looks like this:
//void *ptr
//The following program uses the same pointer for three different data types:

int x = 33;
float y = 12.4;
char c = 'a';
void *ptr;

ptr = &x;
printf("void ptr points to %d\n", *((int *)ptr));
ptr = &y;
printf("void ptr points to %f\n", *((float *)ptr));
ptr = &c;
printf("void ptr points to %c", *((char *)ptr));

/*When dereferencing a void pointer
you must "type cast" the pointer to the appropriate data type before dereferencing with *.
You cannot perform pointer arrithmatic with void pointers*/

//return any type with void*
void* square (const void* num);

int main() {
  int x, sq_int;
  x = 6;
  sq_int = square(&x);
  printf("%d squared is %d\n", x, sq_int);

  return 0;
}

void* square (const void *num) {
  int result;
  result = (*(int *)num) * (*(int *)num);
  return result;
}
/*a function pointer used as an arguement is called a callback function*/
