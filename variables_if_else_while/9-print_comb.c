#include<stdio.h>
/**
 * main - entry point
 * Return: always
 */
int main(void)
{
int n;
n=0;
for (n <= 10 ; n++)
{
putchar(n + '0');
}
if (n <= 10)
{
putchar(',');
}
putchar('\n');
return 0;
}
