#include <stdio.h>
void avant(void) __attribute__ ((constructor));
/**
 *avant - prints before main functions
 *Return: void
 */
void avant(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
