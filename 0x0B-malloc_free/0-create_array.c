#include "main.h"
#include <stdlib.h>
/**
 *create_array - returns pointer to size
 *@size: size of array
 *@c: input character
 *Return: 0 for Null pointer if successs
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int a = 0;
if (size == 0)
return ('\0');
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
else
{
while (a < size)
{
p[a] = c;
a++;
}
}
return (p);
}
