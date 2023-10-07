#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return:0
 */
int main(void)
{
	char alphabet = 'z';

	for ( ; alphabet >= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
