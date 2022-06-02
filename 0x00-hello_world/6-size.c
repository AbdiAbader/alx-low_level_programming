#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int inttype;
char chars;
long int longs;
long long int longss;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(chars));
printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
printf("Size of a long int: %zu byte(s)\n", sizeof(longs));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longss));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
