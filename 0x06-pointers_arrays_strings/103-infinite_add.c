#include "main.h"
/**
 *infinite_add - reverse the array.
 *@n1: input character
 *@n2: input character
 *@r: string holder
 *@size_r:length of r
 *Return: added string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = 0, b = 0, d = 0, i = 0, h = 0, rev, temprev = 0;
while (n1[a])
a++;
while (n2[b])
b++;
if (a > size_r || b > size_r)
return (0);
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
for (rev = 0; rev < d; rev++)
{
temprev = r[d];
r[d] = r[rev];
r[rev] = temprev;
d--;
}
return (r);
}
