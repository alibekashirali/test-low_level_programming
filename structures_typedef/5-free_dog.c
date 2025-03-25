/* 5-free_dog.c */
#include "dog.h"
/**
 * free_dog - Frees a dog struct
 * @d: Pointer to dog_t
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
