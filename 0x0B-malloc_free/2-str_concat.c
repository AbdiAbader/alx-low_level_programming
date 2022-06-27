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
if (s1 != NULL)
{
while (s1[j] != '\0')
j++;
}
if (s2 != NULL)
{
while (s2[i] != '\0')
i++;
}
p = malloc(sizeof(char) * (j + i + 1));
if (p == NULL)
return (0);
else
{
for (a = 0; a < j; a++)
p[a] = s1[a];
for (a = 0; a < i; a++)
p[a + j] = s2[a];
return (p);
}
}
