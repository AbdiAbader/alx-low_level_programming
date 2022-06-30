#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenates two strings.
 *@s1: string one.
 *@s2: string two.
 *@n: unsigned integer.
 *Return: fails NULL or new pointer address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
unsigned int len = 0, c1 = 0, c2 = 0;
if (s1 == NULL)
s1[0] = '\0';
if (s2 == NULL)
s2[0] = '\0';
while (s1[c1] != '\0')
{
c1++;
len++;
}
c1 = 0;
new = malloc(sizeof(char) * (len + n));
if (new == NULL)
{
free(new);
return (NULL);
}
while (c2 < (len + n))
{
if (c2 < len)
{
new[c2] = s1[c2];
c2++;
continue;
}
if (c1 < n)
{
new[c2] = s2[c1];
c1++;
c2++;
continue;
}
}
new[c2] = '\0';
return (new);
}
