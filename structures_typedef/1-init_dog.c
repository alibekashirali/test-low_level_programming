/* 1-init_dog.c */
#include "dog.h"
/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
