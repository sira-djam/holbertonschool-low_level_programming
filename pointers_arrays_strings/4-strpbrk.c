#include "main.h"
#include <stdio.h>
/**
  * *_strpbrk - rechercher les strings d'un ensemble d'octet
  * @s: pointer
  * @accept: deuxi√me pointer
  */
char *_strpbrk(char *s, char *accept)
{
	char *t = accept;

	while (*s != '\0')
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);
		}
		accept = t;
		s++;
		}
	return (0);
}

