#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int n;
	c = 'a';
	
	while (n < 10) 
	{
		for (n = 0; n <= 'z'; n++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
	
	
	
}

