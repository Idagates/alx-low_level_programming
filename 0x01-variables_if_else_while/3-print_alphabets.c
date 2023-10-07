#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabets
 * Return:0
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	for (; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (; ALPHABET <= 'Z' ; ALPHABET++)
	{
		putchar(ALPHABET);
	}
	putchar('\n');
	return (0);
}

