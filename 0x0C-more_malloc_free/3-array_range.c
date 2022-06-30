#include <stdlib.h>
#include "main.h"
/**
 *array_range - create array contain all the values
 * from min to max.
 *@min: intger value min
 *@max: max value of elements in array
 *Return: NULL if min > max or fials otherwise pointer to new adddress
 */
int *array_range(int min, int max)
{
int *p;
int x;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (1 + max - min));
if (p == NULL)
{
free(p);
return (NULL);
}
for (x = 0; x <= (max - min); x++)
p[x] = min + x;
return (p);
}
