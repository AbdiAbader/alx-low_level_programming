#include "main.h"
/**
 *rev_string - print string in reverse order
 *@s: string form input
 *Return: void
 */
void rev_string(char *s)
{
char a;
char *abdi;
int num = 0, i;
abdi = s;
for (i = 0; *abdi != '\0'; i++)
{
abdi++;
num++;
}
--abdi;
for (i = 0; i < num / 2; i++)
{
a = *abdi;
*abdi = *s;
*s = a;
s++;
--abdi;
}
}
