#include <stdio.h>
#include <stdlib.h>
/**
 *main - works in opcodes
 *@argc: number of arguments
 *@argv: double pointers
 *Return: 0 for successs
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
int byte, i = 0;
unsigned char *data = (unsigned char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
byte = atoi(argv[1]);
if (byte < 0)
{
printf("Error\n");
exit(2);
}
while (i < byte)
{
if (i == byte - 1)
{
printf("%.2x", data[i]);
break;
}
printf("%.2x ", data[i]);
i++;
}
printf("\n");
return (0);
}
