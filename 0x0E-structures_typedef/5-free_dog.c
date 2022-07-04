#include "dog.h"
#include <stdlib.h>
/**
 *free - free memory allocation.
 *@d: struct name
 *Return: void
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
