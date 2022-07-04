#include "dog.h"
#include <stdlib.h>
int length(char *temp);
/**
 *length - counts length of string
 *@temp: string
 *Return: length of stirng
 */
int length(char *temp)
{
int len = 0, i = 0;
while (temp[i] != '\0')
{
i++;
len++;
}
return (len);
}
/**
 *new_dog - Store copy of name and owner.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *Return: Null if its fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t  *copy;
int  i = 0, len;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
copy = malloc(sizeof(dog_t));
if (copy == NULL)
{
free(copy);
return (NULL);
}
len = length(name);
copy->name = malloc(sizeof(char) * len + 1);
if (copy->name == NULL)
{
free(copy);
return (NULL);
}

while (name[i] != '\0')
{
copy->name[i] = name[i];
i++;
}
copy->name[i++] = '\0';
i = 0;
len = length(owner);
copy->age = age;
copy->owner = malloc(sizeof(char) * len + 1);
if (copy->owner == NULL)
{
free(copy);
return (NULL);
}

while (owner[i] != '\0')
{
copy->owner[i] = owner[i];
i++;
}
copy->owner[i++] = '\0';
return (copy);
}
