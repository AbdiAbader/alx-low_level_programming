#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all arguments in command line
 *@ac: number of arguments
 *@av: char of  command arguments
 *Return: new pointer .
 */
char *argstostr(int ac, char **av)
{
int a, b, d = 0, i = 0;
char *new;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
d++;
}
}
new = malloc(sizeof(char) * (d + ac));
if (new == NULL)
{
free(new);
return (NULL);
}
else
{
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
new[i] = av[a][b];
i++;
}
new[i] = '\n';
i++;
}
return (new);
}
}
