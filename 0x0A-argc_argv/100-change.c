#include <stdio.h>
#include <stdlib.h>
/**
 *main - cent change
 *@argc: number of arguments
 *@argv: cahr pointers
 *Return: 0 for success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
int i, n = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
while (i > 0)
{
n++;
if (i >= 25)
{
i -= 25;
continue;
}
if (i >= 10)
{
i -= 10;
continue;
}
if (i >= 5)
{
i -= 5;
continue;
}
if (i >= 2)
{
i -= 2;
continue;
}
if (i >= 1)
{
i -= 1;
continue;
}
}
printf("%i\n", n);
return (0);
}
