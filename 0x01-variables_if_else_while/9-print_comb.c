#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return:0
 */
int main(void)
{
	int numbers = 0;

	for ( ; numbers <= 9 ; numbers++)
	{
		putchar('0' + numbers);
		if (numbers == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
