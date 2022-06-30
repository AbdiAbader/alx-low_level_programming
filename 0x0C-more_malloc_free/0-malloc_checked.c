#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocates memory using malloc.
 *@b: unsigned int input.
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *new;
new = malloc(b);
if (new == NULL)
exit(98);
return (new);
}
