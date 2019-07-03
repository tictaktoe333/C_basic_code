#include <stdio.h>

void say_hello(int num_times); /* function */
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);


int main(void):
{
/*function pointers
The brackets around (*func_name) are important.
Without them, the compiler will think the function is returning a pointer.
return_type (*func_name)(parameters)
*/

  void (*funptr)(int);  /* function pointer */
  funptr = say_hello;  /* pointer assignment */
  funptr(3);  /* function call */

/*An array of function pointers can replace a switch or an if statement for choosing an action*/

  int x, y, choice, result;
  int (*op[4])(int, int);

  op[0] = add;
  op[1] = subtract;
  op[2] = multiply;
  op[3] = divide;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);
  result = op[choice](x, y);
  printf("%d", result);

  return 0;

}

void say_hello(int num_times) {
  int k;
  for (k = 0; k < num_times; k++)
    printf("Hello\n");
}
int add(int x, int y) {
  return(x + y);
}

int subtract(int x, int y) {
  return(x - y);
}

int multiply(int x, int y) {
  return(x * y);
}

int divide(int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
}
