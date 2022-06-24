#include <stdio.h>
/**
 *main - pritns the number of arguments
 *@argc: number of arguments
 *@argv: pointer char
 *Return: 0 if succes
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
printf("%i\n", (argc - 1));
return (0);
}
