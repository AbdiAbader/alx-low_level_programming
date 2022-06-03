#include <stdio.h>
/**
 * prints in lower case
 *
 *
 */

int main()
{
  int alpha;
  char c;

 for(alpha=97; alpha<=122; alpha++)
    {
      if(alpha!=113 && alpha!=101){ 
      c=alpha;
      putchar(c);
      }}
 putchar('\n');
  return (0);
}


