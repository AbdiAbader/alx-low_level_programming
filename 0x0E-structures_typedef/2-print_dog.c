#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - prints dogs name age and owner.
 *@d: sturct type
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
if (d->age < 0)
printf("Age: %.6f\n", d->age);
else
printf("Age: (nil)\n");
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
else
return;
}
