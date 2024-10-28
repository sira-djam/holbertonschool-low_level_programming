#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: the character to check
 * Return: Always
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)

return (1);

return (0);
}
