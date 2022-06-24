#include <stdio.h>
/**
 *main - prints all arguments on e arguments per line.
 *@argc: argument number.
 *@argv: pointers char
 *Return: 0 for Success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused))char **argv)
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
