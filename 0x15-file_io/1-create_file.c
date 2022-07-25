#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of file
 *@text_content: text to write on file
 *Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
int i = 0, o, w;
o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (o == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
w = write(o, text_content, i);
if (w == -1)
return (-1);
close(o);
return (1);
}
