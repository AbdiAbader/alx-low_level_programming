#include "main.h"
/**
*read_textfile - reads text files
*@filename: name of file.
*@letters: size of letter to be printed
*Return: 0 if fails or actual num of print or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fdr, fdw, fdo;
char *holder;
if (filename == NULL)
return (0);
holder = malloc(sizeof(char) * letters);
if (holder == NULL)
return (0);
fdo = open(filename, O_RDONLY);
fdr = read(fdo, holder, letters);
fdw = write(STDOUT_FILENO, holder, fdr);
if (fdo == -1 || fdr == -1 || fdw == -1 || fdw != fdr)
{
free(holder);
return (0);
}
free(holder);
close(fdo);
return (fdw);
}
