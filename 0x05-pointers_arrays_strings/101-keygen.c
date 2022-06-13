#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int a = 33, b = 122, i;
srand(time(0));
for (i = 0; i < 15 ; i++)
{
  putchar(rand() % ((a-b)+1)-a);
 }
 printf("\n");
 return (0);
}
