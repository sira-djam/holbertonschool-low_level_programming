#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_mul - multplie two integers
 *@a: integers
 *@b: integers
 *Return: always
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - additionne two integers
 *@a: integers
 *@b: integers
 *Return: always
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustrait two integers
 *@a: integers
 *@b: integers
 *Return: always
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div -  division two integers
 *@a: integers
 *@b: integers
 *Return: always
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - renvois le reste de la division de deux entiers
 *@a: integers
 *@b: integers
 *Return: always
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
