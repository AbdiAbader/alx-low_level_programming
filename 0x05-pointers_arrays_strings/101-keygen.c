#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -  generates random password
 *
 *Return: Alawys 0
 */
int main(void)
{
  int  sum, rand_val;
  sum = 0;
  rand_val = 0;
  srand(time(0));
  while(sum < 2772)
    {
      rand_val =rand() % 128;
      sum += rand_val;
	if (sum < 2772)
	putchar(rand_val);
    }
  sum -= rand_val; 
  putchar(2772 - sum);
 
return (0);
}
