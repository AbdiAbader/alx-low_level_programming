#include "main.h"
/**
 * main - printing _Putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
char a[] = "_putchar";
char *b;
b = a;
while (*b != '\0')
{
_putchar(*b);
b++;
}
_putchar('\n');
return (0);
}
