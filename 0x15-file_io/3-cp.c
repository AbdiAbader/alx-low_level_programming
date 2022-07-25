#include "main.h"
/**
 *exit_stat - exit status
 *@e: error number
 *@s: arguments
 *@f: file discriptor
 *Return: 0 for sucess
 */
int exit_stat(int e, char *s, int f)
{
switch (e)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
exit(97);
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
exit(99);
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
exit(100);
default:
return (0);
}
}
/**
 *main - main fucntion
 *@argc: number of arguments
 *@argv: char of array
 *Return: 0  for success
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
int o1, o2, r, w;
char *buff[1024];
if (argc != 3)
exit_stat(97, NULL, 0);
o1 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
o2 = open(argv[1], O_RDONLY);
if (o1 == -1)
exit_stat(99, argv[2], 0);
if (o2 == -1)
exit_stat(98, argv[1], 0);
while ((r = read(o2, buff, 1024)) != 0)
{
if (r == -1)
exit_stat(98, argv[1], 0);
w = write(o1, buff, r);
if (w == -1)
exit_stat(99, argv[2], 0);
}
close(o2) == -1 ? (exit_stat(100, NULL, o2)) : close(o2);
close(o1) == -1 ? (exit_stat(100, NULL, o1)) : close(o1);
return (0);
}
