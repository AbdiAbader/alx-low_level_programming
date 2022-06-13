#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line and comma.
 *@a: pointer
 *@n: integer inpu
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
