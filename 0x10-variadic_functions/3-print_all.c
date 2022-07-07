#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
  char *pe;
int i = 0;
va_list args;
va_start(args,format);
if(format)
{
while(format[i])
{
switch(format[i])
{
case 'c':
printf("%c",va_arg(args, int));
break;
case 'i':
printf("%d",va_arg(args, int));
break;
case 'f':
printf("%.6f",va_arg(args, double));
break;
case 's':
pe = va_arg(args, char *);
if (pe == NULL)
pe = "(nil)";
printf("%s", pe);
break;
default:
i++;
continue;
}
i++;
if (format[i])
printf(", ");
}
}
 printf("\n");
 va_end(args);
}
