#include "main.h"
/**
 *get_bit - get bit at index
 *@n: number
 *@index: index
 *Return: Bit or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
