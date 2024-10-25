#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int n;
	c = 'a';
	n = 1;
	
	while (n <= 10) 
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		n++;
		_putchar('\n');
	}
	
	
	
}

