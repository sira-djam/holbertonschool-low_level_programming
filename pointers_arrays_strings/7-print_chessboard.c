#include "main.h"
/**
  * print_chessboard - imprimer un echiquier
  * @a: initialisation tableau
  */
void print_chessboard(char (*a)[8])
{
	int  i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
