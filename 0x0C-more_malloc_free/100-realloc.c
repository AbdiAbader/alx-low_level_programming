#include <stdlib.h>
#include "main.h"
/**
 *_realloc - reallocation memory
 *@ptr: pointer of old
 *@old_size:  unsigned integer
 *@new_size:  unsigned integer
 *Return: ptr  if new_size == 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *point;
char *copy, *new;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
point = malloc(new_size);
if (point == NULL)
{
free(point);
return (NULL);
}
return (point);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
{
new = ptr;
point = malloc(sizeof(*new) * new_size);
if (point == NULL)
{
free(ptr);
return (NULL);
}
copy = point;
for (i = 0; i < new_size; i++)
{
if (new[i] != '\0')
break;
copy[i] = new[i];
}
}
free(ptr);
return (point);
}
