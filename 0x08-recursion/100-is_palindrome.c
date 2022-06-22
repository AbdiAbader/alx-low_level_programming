#include "main.h"
/**
 *len - length of the string
 *@x: string
 *Return: lenght of the string
 */
int len(char *x);
int len(char *x)
{
if (*x == '\0')
return (0);
x++;
return (1 + len(x));
}
/**
 *pali - check for palindrome
 *@x: input integer
 *@y: input integer
 *@s: input character
 *Return: 1 if its palindrome 0 otherwise
 */
int pali(int x, int y, char *s);
int pali(int x, int y, char *s)
{
x--;
if (s[x] != s[y])
return (0);
y++;
if (y + 1 < x)
return (pali(x, y, s));
return (1);
}
/**
 *is_palindrome - code on palindrome of strings
 *@s: string
 *Return: 1  for palindrome 0 for not
 */
int is_palindrome(char *s)
{
int a, b = 0, r = 0;
a = len(s);
r = pali(a, b, s);
return (r);
}
