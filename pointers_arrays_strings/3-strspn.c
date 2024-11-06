#include "main.h"
/**
  * int _strspn - obtenir une longueur de sous-chaine
  * @s: pointer intitial
  * @accept: string
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int end = 0;
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{		
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				end++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (end);
}
	return (end);
}
