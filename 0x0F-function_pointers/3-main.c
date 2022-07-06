#include <stdio.h>
#include "3-calc.h"
/**
 *main - calculates two number
 *@argc: number of arguments
 *@argv: double pointers
 *Return: 0 for success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
char *o;
int num1, num2;
if (argc != 4)
{
printf("%i Error\n", argc);
exit(98);
}
o = argv[2];
if (get_op_func(o) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*o == '/' || *o == '%') && (atoi(argv[3]) == 0))
{
printf("Error\n");
exit(100);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%i\n", get_op_func(o)(num1, num2));
return (0);
}
