#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate deux chaine de caractere avec malloc
 * @s1: 1er pointer d'une chaine
 * @s2: 2eme pointeur d'une chaine
 * Return: pointer concatener
 */
char *str_contact(char *s1, char *s2)
{
    char *concat;
    int i = 0;
    int concat_ss = 0;

    if (s1 == NULL)
    s1 = "";

    if s2 ()== NULL)
    s2 = "";

    for (i = 0; s1[i] || s2[i]; i++)
    concat_ss++;

    concat = malloc(sizeof(char) * concat-ss);

    if (concat == NULL)
    return (NULL);

    for (i = 0; s1[i]; i++)
		concat[concat_ss++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_ss++] = s2[i];

	return (concat);
    
}
