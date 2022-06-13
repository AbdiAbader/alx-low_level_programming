#include "main.h"
/**
 * _strlen - count how many charater in the string.
 *@s: input string
 *Return: count.
 */
int _strlen(char *s)
{
int a;
for (a = 0; *s != '\0'; a++)
s++;

return (a);
}
