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
int i = 1, add = 0, j = 0;
while (i < argc)
{
while (argv[i][j] != '\0')
{
if ((isdigit(argv[i][j]) == 0))
{
printf("Error\n");
return (1);
}
j++;
}
add += atoi(argv[i]);
i++;
}
printf("%d\n", add);
return (0);
}
