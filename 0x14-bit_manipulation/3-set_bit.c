#include "main.h"
/**
 *set_bit - set bit at given index
 *@n: number
 *@index: index
 *Return: 1 if sucess -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n = *n ^ (1 << index);
return (1);
}
