#include <stdlib.h>
#include "main.h"
/**
 *cal - works assigning and creating arrays
 *@str: string
 *@new: 2d array
 *@s: integer
 *@i: integer
 *Return: void
 */
void cal(char *str, char **new, int s, int i)
{
int x, len = 0, a, b;
x = s;
while (str[x] != ' ')
{
x++;
len++;
}
new[i] = (char *)malloc(sizeof(char) * len);
if (new[i] == NULL)
{
for (a = 0; a <= i; a++)
free(new[a]);
free(new);
}
for (b = 0; b < len; b++)
{
new[i][b] = str[s];
s++;
}
new[i][b] = '\0';

}
/**
 *strtow - words to array
 *@str: stings
 *Return: NULL if empty and fials otherwise pointer address
 */
char **strtow(char *str)
{
char **new;
int i = 0,  c = 0, d;
if (str == NULL || str[0] == '\0')
return (NULL);
for (d = 0; str[d] != '\0'; d++)
{
if (d == 0 && str[d] != ' ')
c++;
if (str[d] == ' ' && (str[d + 1] != ' ' && str[d + 1] != '\0'))
c++;
}
if (c == 0)
return (NULL);
new = malloc(sizeof(char *) * c + 1);
if (new == NULL)
{
free(new);
return (NULL);
}
else
{
for (d = 0; str[d] != '\0'; d++)
{
if (d == 0 && str[d] != ' ')
{
cal(str, new, d, i);
i++;
}
if (str[d] == ' ' && (str[d + 1] != ' ' && str[d + 1] != '\0'))
{
cal(str, new, d + 1, i);
i++;
continue;
}
}
free(new[c][i]);
return (new);
}
}
