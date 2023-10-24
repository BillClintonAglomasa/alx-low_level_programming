#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 *
 * @a: Two dimension array that will be printed
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	/* Declaration */
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar("\n");
	}
}
