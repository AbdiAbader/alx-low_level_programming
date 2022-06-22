#include "main.h"
/**
 *helpprime - solve for prime numbers
 *@x: input integer
 *@n: input integer
 *Return: 0 if not prime 1 otherwise
 */
int helpprime(int x, int n);
int helpprime(int x, int n)
{
if (n % x == 0)
return (0);
if (x <= 2)
return (1);
return (helpprime(x - 1, n));
}
/**
 *is_prime_number - check if the number is prime or  not
 *@n: input integer number
 *Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
int x = 0, r = 0;
if (n == 2)
return (1);
if (n < 2)
return (0);
x = n / 2;
r = helpprime(x, n);
return (r);
}
