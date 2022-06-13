#include <unistd.h>
/**
 *_putchar - prints one char at a time
 *@c: character output
 *Return: 0 for success.
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
