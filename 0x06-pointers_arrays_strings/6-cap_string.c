#include "main.h"
/**
 *cap_string - capitalize after certain charaters
 *@s: source string
 *
 *Return : modified string
 */
char *cap_string(char *s)
{
char spe[14] = {'!', '"', '(', ')', ';', ',', '.', '{', '}', '?', '\t', '\n', ' '};
int i, j;
char *a;
a = s;
for (i = 0; *s != '\0'; i++)
{
if (*s >= 65 && *s <= 90)
s++;
else if (*s >= 97 && *s <= 122)
s++;
else
{
for (j = 0; j <= 14 ;j++)
{
if (*s == spe[j])
{
s++;
if (*s >= 97 && *s <= 122)
{
*s -= 32;
continue;
}
else
j = 0;
}
 

}
s++;
}
}
return (a);
}
