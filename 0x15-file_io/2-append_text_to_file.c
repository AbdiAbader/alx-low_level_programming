#include "main.h"
/**
 *append_text_to_file - append file
 *@filename: name of file
 *@text_content: text to be append
 *Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, o, w;
o = open(filename, O_WRONLY | O_APPEND);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
w = write(o, text_content, i);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
