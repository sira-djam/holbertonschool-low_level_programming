#include "main.h"
/**
  * * _memcpy - copier une zone memoire vers une autre
  * @dest: 1er zone memoire
  * @src: 2eme zone memoire
  * @n: nombre d'octet
  * Return: sur pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned i;

for (i = 0 ; i < n ; i++)
	dest[i] = src[i];
		return (dest);
}
