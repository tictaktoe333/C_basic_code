#include <stdio.h>
#include <string.h>
int main(void):
{
char stringletters[] = "string"; //if no len is defined the initialised with auto make the length
/* this means that stringletters = ('s','t','r','i','n','g','\0')
\0 is the null byte at the end of a string
length always needs to be one more than expected for the \0
chars are shown in single quotes ''
 */

/*When scanf() is used to read a string, there is no need for &
because an array name acts as a pointer.eg.*/
char first_name[25];
scanf("%s %d", first_name, &age);
/* scanf reads until whitespace
for a string with spaces use gets()
gets() terminates at a newline*/

/* more secure alt to gets() is fgets() - this reads the specified
number of characters - preventing BUFFER OVERFLOW eg.*/
fgets(full_name, 50, stdin);
// fgets reads n-1 char because of null byte
// stdin is for standard input (keyboard)

char city[40];
 printf("Enter your favorite city: ");
 fgets(city,40,stdin);
/*displaying strings using printf(),fputs(),puts()
The fputs() requires the name of string and destination pointer
To print to the screen, use stdout which refers to the standard output.*/
fputs(city, stdout);
/*puts() only requires string arguement, however it adds a newline to output*/
puts(city);

/*The sprintf and sscanf Functions
A formatted string can be created with the sprintf() function.
Can build a string from other data types.eg.*/
char info[100];
char dept[] = "HR";
int emp = 75;
sprintf(info, "The %s dept has %d employees.", dept, emp);
printf("%s\n", info);

/*sscanf() is for scanning a string for values.
The function reads values from a string and stores them at the corresponding variable addresses.
similar to grep*/
  char info[] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info, "%s %s %d", city, state, &population);
  printf("%d people live in %s, %s.", population, city, state);

  /*strlen() //- get length of a string
  strcat() //- merge two strings
  strcpy() //- copy one string to another
  strlwr() //- convert string to lower case
  strupr() //- conver string to upper case
  strrev() //- reverse string
  strcmp() //- compare two strings
  NULL // null pointer const*/
  char s1[] = "The grey fox";
  char s2[] = " jumped.";

  strcat(s1, s2);
  printf("%s\n", s1);
  printf("Length of s1 is %d\n", strlen(s1));
  strcpy(s1, s2);
  printf("s1 is now %s \n", s1);

//converting a string to a number
//atoi(str) Stands for ASCII to integer
char input[10];
int num;

printf("Enter a number: ");
gets(input);
num = atoi(input);

  return 0;
}
