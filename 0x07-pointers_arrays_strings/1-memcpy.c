#include "main.h"
/**
 *_memcpy - copy to n size
 *@dest: the destination of the copied strings
 *@src: source where the files copied.
 *@n: to n length copied
 *Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *p;
p = dest;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (p);
}
