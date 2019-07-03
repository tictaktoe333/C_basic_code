#include <stdlib.h>
//automatic memory allocation in the "stack"
//sizeof (number of bytes allocated to the var)
int x;
printf("%d", sizeof(x)); /* output: 4 */

//or size of arr
int arr[10];
printf("%d", sizeof(arr)); /* output: 40 */

/*Dynamic memory allocation
the process of allocating and freeing memory as needed.
Dynamic memory is managed with pointers
that point to newly allocated blocks of memory in an area called the "heap".

There is  also "statically managed" data in "main memory"
for variables that persist for the lifetime of the program eg const.

The stdlib.h library includes memory management functions.*/

malloc(bytes) //Returns a pointer to a contiguous block of memory that is of size bytes.

calloc(num_items, item_size)
/* Returns a pointer to a contiguous block of memory that has num_items items,
each of size item_size bytes.
Typically used for arrays, structures, and other derived data types.
The allocated memory is initialized to 0.*/

realloc(ptr, bytes)// Resizes the memory pointed to by ptr to size bytes.
                  //The newly allocated memory is not initialized.

//*************************************************************
//important for buffer overflow
free(ptr)//Releases the block of memory pointed to by ptr.
//*************************************************************

//Allocating string length
// allocating only what is needed is better memory management
char str20[20];
strcpy(str20, "12345");
str = malloc(strlen(str20) + 1);

// dynamic array using calloc
/* initialize array */
typedef struct {
  int *elements;
  int size;
  int cap;
} dyn_array;

dyn_array arr;

arr.size = 0;
arr.elements = calloc(1, sizeof(arr.elements) );
