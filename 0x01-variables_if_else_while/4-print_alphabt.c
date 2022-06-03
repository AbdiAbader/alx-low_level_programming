#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int alpha;
for (alpha = 97; alpha <= 122; alpha++)
{
if (alpha != 113 && alpha != 101)
putchar(alpha);
}
putchar('\n');
return (0);
}


