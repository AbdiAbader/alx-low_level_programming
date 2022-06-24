#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - prints addition of numbers
 *@argc: number of arguments.
 *@argv: char pointer
 *Return: 0 for success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
int i = 1, add = 0;
while (i < argc)
{
if (isdigit(*(argv[i])) == 0)
{
printf("Error\n");
return (1);
}
if (atoi(argv[i]))
add += atoi(argv[i]);
i++;
}
printf("%i\n", add);
return (0);
}
