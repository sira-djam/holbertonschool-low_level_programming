#include <ctype.h>
#include "main.h"

/**
 * _islower - test
 * @c: test letter
 * Return: return true ot false
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
