#include<stdio.h>
/**
 * main - entry point
 * Return: always
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
