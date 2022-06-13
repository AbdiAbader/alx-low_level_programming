#include "main.h"
/**
 *puts2 - print every other character in the string
 *@str: string input
 *Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
_putchar(*str);
if (*(str + 1) == '\0')
break;
str += 2;
}
_putchar('\n');
}
