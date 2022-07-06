#include "function_pointers.h"
/**
 *int_index - find integer in array and return its index.
 *@array: pointer to array
 *@size: size of array
 *@cmp: compare functions
 *Return: index or -1 if its fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
