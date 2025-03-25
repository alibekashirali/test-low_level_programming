#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 * Return: The length of the string
 */
int _strlen(const char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    
    if (!name || !owner)
        return (NULL);

    dog = malloc(sizeof(dog_t));
    if (!dog)
        return (NULL);

    dog->name = malloc((_strlen(name) + 1) * sizeof(char));
    if (!dog->name)
    {
        free(dog);
        return (NULL);
    }
    _strcpy(dog->name, name);

    dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
    if (!dog->owner)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }
    _strcpy(dog->owner, owner);

    dog->age = age;

    return (dog);
}

