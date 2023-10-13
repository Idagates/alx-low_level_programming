#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 * Return:0
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0 ; numbers <= 9 ; numbers++)
	{
		if (numbers == 2)
		{
			continue;
		}
		if (numbers == 4)
		{
			continue;
		}
		_putchar('0' + numbers);
	}
	_putchar('\n');
}
