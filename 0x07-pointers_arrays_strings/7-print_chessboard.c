#include "main.h"
/**
 * print_chessboard -Prints a chessboard (8x8 grid) to the standard output
 *
 * @a: Pointer to an array of 8 strings,each representing a row of the board
 *
 * Return: void
 *
 * Desc:This function takes an array of 8 strings, each representing a
 * row of a chessboard.It prints the entire chessboard to the standard output.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
