#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
