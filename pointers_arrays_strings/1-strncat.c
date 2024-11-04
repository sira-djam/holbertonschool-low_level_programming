#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  6  * str_concat - concatenate strings
  7  * @dest: string 1
  8  * @src: string 2
  9  * Return: NULL if failure
 10  */
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

