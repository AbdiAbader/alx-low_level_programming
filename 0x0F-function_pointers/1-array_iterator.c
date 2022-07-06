#include "function_pointers.h"
/**
 *array_iterator - iterator each elements in aray to pointer function
 *@size: size_t
 *@array: array
 *@action: pointer to function
 *Retrum: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
return;
while (i < size)
{
action(array[i]);
i++;
}
}
