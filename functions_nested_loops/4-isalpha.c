#include <ctype.h>
#include "main.h"

/**
 * _isalpha - test
 * @c: test letter
 * Return: return true ot false
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
