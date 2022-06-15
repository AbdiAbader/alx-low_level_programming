#include "main.h"
/**
*string_toupper - changing lower to upper
 *@s:input string form
 *Return:the value of a
 */
char *string_toupper(char *s)
{
char *a;
a = s;
while (*s != '\0')
{
if (*s >= 97 && *s <= 122)
{
*s -= 32;
}
s++;
}
return (a);
}
