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
  int ab[9]={32, 33, 35, 36, 38, 42, 63, 64, 94};
  int  i, c = 0, r = 0, d = 0;
srand(time(0));
 r= rand() % 4;
for (i = 1;d < 2772 ; i++)
{
  c++;
  d = d + (rand() % 128);
  if ( c < 10)
    {
if(r == 1)
{
  putchar((rand() % (90-65+1))+65);
  r = rand() % 4;
 }
else if( r == 2)
 {
   putchar(ab[rand() % 9]);
   r=rand() % 4;
 }
 else if (r == 3)
 {
   putchar((rand() % (57-48+1))+48);
 r=rand() % 4;
 }
else
{
  putchar((rand() % (122-97+1))+97);

  r= rand() % 4;
 }
    }
  else
    {
      printf("\n");
      printf("Tada! Congrats");
    }}
printf("\n");
 
return (0);
}
