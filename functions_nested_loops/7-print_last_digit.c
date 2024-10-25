#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int _print_last_digit(int r)
{
 int last;
        last = r % 10;

        if (last < 0)
	{
                last *= last -1;
	}
	       	_putchar(last + '0');

        return (last);
}
