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
if (argc == 2)
{
printf("Error\n");
return (1);
}
while (i < argc)
{
if (atoi(argv[i]))
add += atoi(argv[i]);
else if (*argv[i] == '0')
add += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%i\n", add);
return (0);
}
