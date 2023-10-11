#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @number: the number to be checked
 * Return: the value of the last digit
 */
int print_last_digit(int number)
{
	int new;

	if (number < 0)
	number = -number;

	new = number % 10;

	if (new < 0)
		new = -new;

	_putchar('0' + new);
	return (new);
}
