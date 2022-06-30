#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 *@nmemb: size of array
 *@size: bytes of each elements
 *Return: NULL or Pointer address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int a;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
p = ptr;
for (a = 0; a < (nmemb * size); a++)
p[a] = '\0';
return (ptr);
}
