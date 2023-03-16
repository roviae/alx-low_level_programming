#include "main.h"

/**
 * print_chessboard - fxn that prints the chessboard
 * @a: rows indexes
 * @8: columns indexes
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j, n = 8;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == a[1][0] && a[i][j] != a[1][1])
			{
				_putchar(10);
			}
			_putchar(a[i][j]);
		}
	}
	_putchar(10);
}
