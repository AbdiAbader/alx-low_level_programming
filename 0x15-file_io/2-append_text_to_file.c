#include "main.h"
/**
*append_text_to_file - append file
*@filename: name of file
*@text_content: text to be append
*Return: -1 or 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fdo, fdw, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
fdo = open(filename, O_APPEND | O_WRONLY);
fdw = write(fdo, text_content, i);
if (fdo == -1 || fdw == -1)
return (-1);
return (1);
}
