#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: string
 *@f: functions
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
f(name);
}
