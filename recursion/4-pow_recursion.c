#include "main.h"
/**
  * _pow_recursion - renvoyé la valeur de x puissance y
  * @x: integers
  * @y: integers
  * Return: always
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
	return (_pow_recursion(x, y));
}

