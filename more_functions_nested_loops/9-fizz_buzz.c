#include<stdio.h>
/**
  * main - imprim√ ©selon si multiple ou divisibl
  * les mots fizz ou buzz ou fizz buzz
  * Return: always
  */

int main(void)
	{
		int a;

	for (a = 1 ; a <= 100 ; a++)
{
	if (a % 15 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (a % 3 == 0)
	{
		printf("Fizz ");

	}
	else
	{
		putchar(a + '0');
}		putchar(' ');
}
	return (0);
}
