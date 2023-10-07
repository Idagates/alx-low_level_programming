#include <stdio.h>
/**
 * main - prints the alphabet except q and e
 * Return:0
 */
int main(void)
{
	char alphabet = 'a';

	for ( ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
