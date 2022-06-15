#include "main.h"
/**
 *_strcat - concatenates two strings.
 *@dest: the string .
 *@src: source string to append to dest.
 *Return: dest .
 */
char *_strcat(char *dest, char *src)
{
int i, j;
char *p;
p = dest;
for (i = 0; *dest != '\0'; i++)
dest++;
for (j = 0; *src != '\0'; j++)
{
*dest = *src;
dest++;
src++;
}

return (p);
}
