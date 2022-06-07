#include "main.h"
/**
 *_isalpha -  check for if its alphabet
 *
 *@c: The character in ASCII code
 *Return: (0) if not a letter (1) is letter
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
if (c >= 97 && c <= 122)
return (1);
return (0);
}
