#include <stdio.h>
/**
 * main - check the code.
 *
* Return: Always 0.
*/
int main(void)
{
unsigned long int a, x, y, s, x1, x2, y1, y2, s1, s2, overflow;
x = 1;
y = 2;
printf("%lu", x);
printf(",");
printf(" ");
printf("%lu", y);
for (a = 2; a <= 93; a++)
{
s = x + y;
x = y;
y = s;
printf(",");
printf(" ");
printf("%lu", s);

}
 x1 = x / 1000000000;
 x2 = x % 1000000000;
 y1 = y / 1000000000;
 y2 = y % 1000000000;

 for (; a < 99; a++)
   {
     overflow = (x2 + y2) / 1000000000;
     s2 = (x2 + y2) - (1000000000 * overflow);
     s1 = (x1 + y1) + overflow;

     printf(", %lu%lu", s1, s2);

     x1 = y1;
     x2 = y2;
     y1 = s1;
     y2 = s2;
   }
return (0);
}
