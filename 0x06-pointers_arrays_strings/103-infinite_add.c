#include "main.h"
/**
 *infinite_add - add two  numbers.
 *@n1: input character
 *@n2: input character
 *@r: store add in buffer
 *@size_r: size of the buffer
 *Return: buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = 0, b = 0, d = 0, i = 0, h = 0;
while (n1[a])
{
a++;
}
while (n2[b])
{
b++;
}
if (a > size_r || b > size_r)
{
return (0);
}
--a;
--b;
for (d = 0; d < size_r - 1; d++)
{
i = h;
if (a >= 0)
i = i + n1[a] - 48;
if (b >= 0)
i = i + n2[b] - 48;
if (a < 0 && b < 0 && i == 0)
break;
h = i / 10;
r[d] = i % 10 + 48;
b--;
a--;
}
r[d] = '\0';
if (a >= 0 || b >= 0 || h != 0)
return (0);
d--;
for (a = 0; a < d; a++)
{
h = r[d];
r[d] = r[a];
r[a] = h;
d--;
}
return (r);
}
