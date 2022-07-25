#include "main.h"
/**
 *read_textfile - reads text files
 *@filename: name of file.
 *@letters: size of letter to be printed
 *Return: 0 if fails or actual num of print or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char str;
FILE *f;
size_t i = 0; 
if (filename == NULL)
return (0);
if ((f = fopen(filename,"r")) == NULL)
return (0);
while ((str = getc(f)) != EOF)
{
if (i == letters)
break;
printf("%c", str);
i++;
}
fclose(f);
return (i);
}
