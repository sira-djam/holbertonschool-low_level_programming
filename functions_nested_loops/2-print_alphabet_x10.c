#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	int n = 0;
	
	while (n < 10) 
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}

