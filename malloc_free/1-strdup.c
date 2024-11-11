#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - renvoie un pointeur surune nvelle chaine de caractère
 * qui est dupliquée
 * @str: pointeur d'une chaine de caractere
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *dup;
int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
j++;

dup = malloc(sizeof(char) * (j + 1));
if (dup == NULL)
return (NULL);
for (i = 0; str[i]; i++)
{
dup[i] = str[i];
}
dup[j] = '\0';
return (dup);
}
