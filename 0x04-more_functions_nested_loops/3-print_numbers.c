#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return:0
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0 ; numbers <= 9 ; numbers++)
	{
		_putchar('0' + numbers);
	}
	_putchar('\n');
}
