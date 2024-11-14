#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialisation d'un chien
 * @d: integers
 * @name: nom
 * @age: age du chien
 * @owner: proprietaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
    else
        return;
}