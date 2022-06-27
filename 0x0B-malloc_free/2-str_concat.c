#include <stdlib.h>
#include "main.h"
/**
 *str_concat - append two strings
 *@s1: string one
 *@s2: string two
 *Return: Null if empty otherwise newly pointer
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, a;
char *p;
while (s1[j] != '\0')
j++;
while (s2[i] != '\0')
i++;
p = malloc(sizeof(char) * (j + i + 1));
if (p == NULL)
return (0);
else
{
if (*s1 != NULL)
{
for (a = 0; a < j; a++)
p[a] = s1[a];
}
if (*s2 != NULL)
{
for (a = 0; a < i; a++)
p[a + j] = s2[a];
}
return (p);
}
}
