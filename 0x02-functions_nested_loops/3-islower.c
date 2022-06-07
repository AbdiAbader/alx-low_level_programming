#include "main.h"
/**
 *_islower - checking  lower cases
 *
 *@c: The character in ASCII code
 *Return: (1) is lowercase (0) if not lower case
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
