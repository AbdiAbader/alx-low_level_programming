#include <stdio.h>
/**
 * main - prints prime factor which is largest.
 * Return: Always 0.
 */

int main(void)
{
long int ab = 612852475143, prime = 2;
while (prime <= ab)
{
if (ab % prime == 0)
{
ab = ab / prime;
continue;
}
prime++;
}
printf("%ld\n", prime);
return (0);
}
