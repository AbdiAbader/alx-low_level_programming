#include "main.h"
/**
*create_file - creates a file
*@filename: name of file
*@text_content: text to write on file
*Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
int fdo, fdw, count = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[count])
count++;
}
fdo = creat(filename, 0600);
fdw = write(fdo, text_content, count);
if (fdo == -1 || fdw == -1)
return (-1);
return (1);
}
