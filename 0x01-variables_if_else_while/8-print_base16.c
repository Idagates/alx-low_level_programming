#include <stdio.h>
/**
 * main - prints hexadecimals
 * Return:0
 */
int main(void)
{
	int numbers = 0;
	char alphabet = 'a';

	for ( ; numbers <= 9 ; numbers++)
	{
		putchar('0' + numbers);
	}
	for ( ; alphabet <= 'f' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
