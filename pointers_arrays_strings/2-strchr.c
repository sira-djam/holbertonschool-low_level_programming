#include "main.h"
#include <stdio.h>
/**
  * *_strchr - localisation d'un caracter dans une string
  * @s: string
  * @c: le caractere
  * Return: always
  */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (0);
}
