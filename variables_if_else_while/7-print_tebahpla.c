#include<stdio.h>
/**
 * main - entry point
 * Return: always
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
