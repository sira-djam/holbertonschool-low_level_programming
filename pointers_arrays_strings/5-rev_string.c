#include "main.h"
#include "2-strlen.c"
/**
  * rev _string - reverses string
  * @s: letter checked
  */

void rev_string(char *s)
{
int n = 0;
int l;
char temp;
while (s[n] != '\0')
{
n++;
}
for (l = 0; l < n / 2; l++)
{
temp = s[l];
s[l] = s[n - 1 - l];
s[n - 1 - l] = temp;
}
}
