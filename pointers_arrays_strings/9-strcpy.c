#include "main.h"
#include <stddef.h>
/**
  * *_strcpy - copier une chaine
  * @*dest: 1er element du tableau
  * @*src: nombre d'element dans le tableau
  */
 char *_strcpy(char *dest, char *src)

 {
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
