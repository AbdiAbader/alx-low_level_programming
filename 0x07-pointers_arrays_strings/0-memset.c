#include "main.h"
/**
 *_memset - fill n bytes of the memory
 *@s: strng source
 *@b: value  that replace
 *@n: the loop go to n
 *Return: the adrress of string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned  int i;
char *p;
p = s;
for (i = 0; i < n; i++)
s[i] = b;
return (p);
}
