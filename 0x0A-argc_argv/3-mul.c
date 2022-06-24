#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints multiplication of number
 *@argc: number of arguments
 *@argv: char pointer
 *Return: 0 for success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
if (argc != 3)
printf("Error\n");
else
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
