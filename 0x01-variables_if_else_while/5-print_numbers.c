#include <stdio.h>
/**
 * main - prints numbers
 * Return:0
 */
int main(void)
{
	int number = 0;

	for ( ; number <= 9; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
