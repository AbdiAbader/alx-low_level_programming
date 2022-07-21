#include "main.h"
/**
 *get_endianness - checks the endianness.
 *@void: void
 *Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
int a = 0x00000001;
char *ptr = (char *)&a;
return (ptr[0]);
}
