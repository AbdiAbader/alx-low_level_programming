#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int a = 33, b = 122, i, r = 0;
srand(time(0));
 r= rand() % 4;
 int a[]={33,35,36,38,42,64,94};
for (i = 0; i < 14 ; i++)
{
if(r == 1)
{
  putchar(rand() % (90-65+1)+65);
  r = rand() % 4;
 }
 if( r == 2)
 {
 putchar(rand() % (122-97+1)+97);
 r= rand() % 4;
 }
if (r == 3)
 {
 putchar(rand() % (57-48+1)+48);
 }
if( r == 4)
{
  putchar(a[rand() % 8 ]);
 }
 }
printf("\n");
return (0);
}
