#include "search_algos.h"
/**
*linear_search - applays liner search on array.
*@array: pointer to array.
*@size: size of array.
*@value: the value to searched in array.
*Return: 1 if value found or -1 if not found.
*/
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (value < 0 || size < 1 || array == NULL)
{
return (-1);
}
for (; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
