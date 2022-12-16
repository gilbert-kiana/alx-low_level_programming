#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, j;

	for (1 = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1)
			_putchar('\n');
		}

}
