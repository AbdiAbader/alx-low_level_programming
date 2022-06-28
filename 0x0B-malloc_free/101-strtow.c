#include <stdlib.h>
#include "main.h"
void cal(char *str, char **new, int s,int i)
{
  int x, len = 0, a, b;
x = s;
while (str[x] != ' ')
{
x++;
len++;
}
new[i] =(char *)malloc(sizeof(char) * len + 1);
for (a = i; a <= i; a++)
{
for (b = 0; b < len; b++)
  {
  new[a][b] = str[s];
  s++; 
}
new[a][b] = '\0';
}
  
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
if (str[0] != ' ' && str[0] != '\0')
c++;
if (str[d] == ' ' && (str[d+1] != ' ' && str[d+1] != '\0'))
c++;
  }
new = malloc(sizeof(char*) * c + 1);
if (new == NULL)
{
free(new);
return (NULL);
}
else
{
for (d = 0; str[d] != '\0'; d++)
{
  if (str[0] != ' ' && str[0] != '\0')
    i++;
  if (str[d] == ' ' && (str[d+1] != ' ' && str[d+1] != '\0'))
  {  cal(str,new,d + 1,i);
    i++;
 continue;
  }
}
return (new);
}
}
