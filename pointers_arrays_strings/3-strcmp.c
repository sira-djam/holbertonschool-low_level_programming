#include "main.h"
/**
  * _strcmp - compare deux strings
  * @s1: chaine de caractere
  * @s2: chaine de caractere
  * Return: less than 0 if s1 is less than s2, 0 if they're equal,
  * more than 0 if s1 is greater than s2
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	{
		return (0);
	}

		return (s1[i] - s2[i]);
}
