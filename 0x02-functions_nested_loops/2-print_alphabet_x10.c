#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int n = 0;

	while (n < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		n++;
	}
}
