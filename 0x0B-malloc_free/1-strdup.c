#include <stdlib.h>
#include "main.h"
/**
 *_strdup - works on allocating new memory
 *@str: string
 *Return: Null if its 0 pointer otherwise
 */
char *_strdup(char *str)
{
char *p;
int i = 0, j = 0;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
j++;
p = malloc(sizeof(char) * j);
while (i < j)
{
p[i] = str[i];
i++;
}
if (p == NULL)
return (0);
else
return (p);
}
