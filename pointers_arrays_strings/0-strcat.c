#include "main.h"
/**
  * *_strcat - imprimer deux ligne a suivre
  * @dest: est un pointer d'une chaine de caractere
  * @src: deuxieme ligne de caractere pointer
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
