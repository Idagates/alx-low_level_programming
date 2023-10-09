#include <stdio.h>
/**
 * main - prints a combination of three digits
 * Return:0
 */
int main(void)
{
	int firstnumber, secondnumber, thirdnumber;

	for (firstnumber = 0 ; firstnumber <= 9 ; firstnumber++)
	{
	for (secondnumber = 0 ; secondnumber <= 9 ; secondnumber++)
	{
	for (thirdnumber = 0 ; thirdnumber <= 9 ; thirdnumber++)
	{
		if (firstnumber != secondnumber && thirdnumber)
		{
		if (firstnumber < secondnumber && secondnumber < thirdnumber)
		{
			putchar('0' + firstnumber);
			putchar('0' + secondnumber);
			putchar('0' + thirdnumber);
			if (firstnumber == 7 && secondnumber == 8 && thirdnumber == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
