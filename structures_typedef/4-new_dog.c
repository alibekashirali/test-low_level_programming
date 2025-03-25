/* 4-new_dog.c */
#include "dog.h"
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    
    d = malloc(sizeof(dog_t));
    if (!d)
        return (NULL);
    
    d->name = strdup(name);
    d->owner = strdup(owner);
    if (!d->name || !d->owner)
    {
        free(d->name);
        free(d->owner);
        free(d);
        return (NULL);
    }
    d->age = age;
    
    return (d);
}
