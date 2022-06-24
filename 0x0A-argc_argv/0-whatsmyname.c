#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 *main - prints it s name
 *@argc: number of command arguments
 *@argv: pointers of char
 *Return: 0 if success.
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
