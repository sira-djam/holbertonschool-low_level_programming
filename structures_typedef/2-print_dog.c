#include "dog.h"
#include <stdio.h>
/**
 * print_dog - imprimer la fiche du chien
 * @d: pointer de struct dog
 */
void print_dog(struct dog *d)
{

if (d == NULL)
printf("\n");

if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("(nil)");

if (!d->age)
printf("\n");
else
printf("Age: %f\n", d->age);


if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("(nil)");


}
