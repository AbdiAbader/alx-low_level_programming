#include "main.h"
/**
*read_textfile - reads text files
*@filename: name of file.
*@letters: size of letter to be printed
*Return: 0 if fails or actual num of print or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *str;
ssize_t f, r, w;
if (filename == NULL)
return (0);
str = malloc(sizeof(char) * letters);
if (str == NULL)
return (0);
else
{
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
r = read(f, str, letters);
if (r == -1)
{
free(str);
return (0);
}
w = write(STDOUT_FILENO, str, r);
if (w == -1)
{
if (w != r)
free(str);
return (0);
}
free(str);
close(f);
return (w);
}
}
