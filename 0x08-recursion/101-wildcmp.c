#include "main.h"
/**
 *check - compare indetical of two string
 *@s1: input intger 
 *@s2: input integer
 *Return: 1 if identical otherwise 0
 */
int check(char *s1 , char *s2)
{
if ((*s2 == '\0' && *s1 == '\0'))
return (1);
if (*s2 == *s1)
return (check(++s1,++s2));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (check(s1,++s2));
if ((check(++s1,s2)) || (check(s1,++s2)))
return (1);
}
return (0);
}
/**
 *wildcmp - check for indetical
 *@s1: string 1
 *@s2: string 2
 *Return: 1 for identical or otherwise
 */
int wildcmp(char *s1, char *s2)
{
int r;
r = check(s1,s2);
return (r);
}
