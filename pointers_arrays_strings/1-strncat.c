#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strncat - concatenate strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
	}

