#include "main.h"
/**
 * print_line - draws a straight line
 * Return:0
 * @n: the int number of times character _ should print
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line;

		for (line = 1 ; line <= n ; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
