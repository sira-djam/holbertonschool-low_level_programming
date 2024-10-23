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
putchar(c + '0');
c++;
}
return (0);
}
