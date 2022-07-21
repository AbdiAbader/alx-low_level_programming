#include "main.h"
/**
 *clear_bit - set bit to 0 at given index
 *@n: number
 *@index: index
 *Return: 1 if sucess -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n = *n  & (~(1 << index));
return (1);
}
