#include <stdio.h>
int main(void):
{
int a[5] = {22, 33, 44, 55, 66};
int *ptr = NULL; //*var the astrix shows states this is a "pointer"
//pointers show the memory position of the variable (in hexdecimal)
//&var states to put the value in memory position of var pointer
//eg. scanf("%d", &a[i])
//eg. printf("%x", a[i]) %x is the placeholder for hexidecimal type
//x% this can be substitued for a var of any type

int i;

ptr = a;
for (i = 0; i < 5; i++) {
  printf("%d ", *(ptr + i));
}


//second program
int * get_evens(); //returns an int array (pointer)
//you cannot pass an array out of a function but you can pass int pointers aka int array

int main() {
  int *a;
  int k;

  a = get_evens(); /* get first 5 even numbers */
  for (k = 0; k < 5; k++)
    printf("%d\n", a[k]); //a is a pointer so a[k] is the same as *(a+k)

  return 0;
}

int * get_evens() {
  static int nums[5];/*when a local variable is being passed out of a function
                       you need to declare it as "static" */
  int k;
  int even = 0;
  for (k = 0; k < 5; k++) {
    nums[k] = even += 2;
  }
  return (nums);
}
