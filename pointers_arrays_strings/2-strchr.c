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
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	s++;
	}
	return (0);
}
