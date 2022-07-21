#include "main.h"
/**
*flip_bits - set bit at given index
*@n: number
*@m: index
*Return: 1 if sucess -1 otherwise
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flips, i = 0;
flips = n ^ m;
while (flips)
{
if (flips & 1)
i++;
flips = flips >> 1;
}
return (i);
}
