#include <stdio.h>
/**
 * main - prints a combination of two numbers
 * Return: 0
 */
int main(void)
{
	int firstnumber, secondnumber;

	for (firstnumber = 0 ; firstnumber <= 9 ; firstnumber++)
	{
		for (secondnumber = 0 ; secondnumber <= 9 ; secondnumber++)
		{
			if (firstnumber != secondnumber && firstnumber < secondnumber)
			{
				putchar('0' +  firstnumber);
				putchar('0' + secondnumber);
				if (firstnumber == 8 && secondnumber ==9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
