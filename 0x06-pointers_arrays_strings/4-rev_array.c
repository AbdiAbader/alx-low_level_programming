#include "main.h"
/**
 *reverse_array - reverse content in array
 *@a:first aray adress
 *@n:number swaps
 *Return: none
 */
void reverse_array(int *a, int n)
{
int i, c;
for (i = 0; i < n / 2; i++)
{
c = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = c;
}
}
