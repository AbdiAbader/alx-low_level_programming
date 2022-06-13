#include "main.h"
/**
 *swap_int - swaps to numbers a and b.
 *@a: input pointer integetr.
 *@b: input pointer  integer.
 *Return void.
 */
void swap_int(int *a, int *b)
{
int  abdi;
abdi = *a;
*a = *b;
*b = abdi;
}
