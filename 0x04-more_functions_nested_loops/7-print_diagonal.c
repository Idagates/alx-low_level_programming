#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: int number of times / should print
 * Return:0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d;
		int e;

		for (d = 0; d < n; d++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == d)
				{
					_putchar('\\');
				}
				else if (e < d)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
