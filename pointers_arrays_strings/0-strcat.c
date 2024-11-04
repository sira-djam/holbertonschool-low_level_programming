#include "main.h"
/**
  * *_strcat - imprimer deux ligne a suivre
  * @dest: est un pointer d'une chaine de caractere
  * @src: deuxieme ligne de caractere pointer
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
int lend, lens, l, a;
lend = _strlen(dest);
lens = _strlen(src);
l = lend;
for (a = 0; a <= lens; a++)
{
dest[l] = src[a];
l++;
}
dest[l] = '\0';
return (dest);
}
