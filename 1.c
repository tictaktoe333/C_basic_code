/* start
*/


#include <stdio.h> //include preprocessor direective
#include <string.h>
#define PI_5DP 3.14152f //define const - consts are all uppercase eg PI_FIVE_DP
#define SCALE_FACTOR (5.0f / 9.0f) //don't have to be a value, const replaces all instances of const in preprocessor
#define num3 (num1 / num2)
int main(void):
{
int number,age; //unintialised vars (ints)
float profit;
char[50] firstname, lastname;
char[100] name;
number = 1; //initialised
profit = 123.45f;//float w/ f

printf("Hello World... Number=: %d, Profit=%.2f\n", number, profit);
scanf("Enter your age: %d", &age); //input int into age var
printf("Your age is: %d\n", age);

float num1 = 24.0f;
float num2 = 7.0f;
printf("%.1f divided by %.1f equals %.2f\n",num1 ,num2, num3);
//placeholders are actually called conversion specifications (they =start with a %)
// in the event there are too many conversion specifications (or the wrong type) meaningless data (of the stated type will be produced)
//page39 for the different types of int and float placeholders (%.2d,%6e,%f,%g)
/*
//NOTES
// below are "alert sequences"
"\n" //new line
"\a" //alert (bell)
"\b" //backspace
"\t" //horizontal tab

in printf %d and %i are the same
in scanf %d is numbers in base 10 and %1 is hexdecimal (0x prefix) or octal (0 prefix)
stick with scanf(%d) because input 020 =20 whereas for %i 020=16

= operator is right associative
int i
float f
f=i=33.3f       f=(i=33.3f)

i=33
f=33.0
""
*/
scanf("Enter your first name: %s", &firstname);
scanf("Enter your lastname: %s", &lastname);
printf("first name is %s, last name is %s\n", firstname, lastname);
*strcat (" \0", firstname);
*strcat (lastname, firstname);
printf("%s\n",name );
return 0
}
