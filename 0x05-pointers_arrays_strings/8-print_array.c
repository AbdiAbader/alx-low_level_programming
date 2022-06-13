#include <stdio.h>
#include "main.h"
 /**
 *print_array - print_array in there order to the n .
*@a: pointer
 *@n: integer input
 *Return: void
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
