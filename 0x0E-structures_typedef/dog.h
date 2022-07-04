#ifndef _DOG_H_
#define _DOG_H_


/**
 *struct dog - description about structure
 *@name: Dog name
 *@age: dog age
 *@owner: dogs owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 *dog_t - new name for sturct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
