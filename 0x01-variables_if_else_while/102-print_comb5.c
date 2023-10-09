#include <stdio.h>
/**
 * main - prints a two two-digit combo
 * Return: 0
 */
int main(void)
{
int firstnumber, secondnumber, thirdnumber, fourthnumber;

for (firstnumber = 0 ; firstnumber <= 9; firstnumber++)
{
for (secondnumber = 0 ; secondnumber <= 9; secondnumber++)
{
for (thirdnumber = 0 ; thirdnumber <= 9; thirdnumber++)
{
for (fourthnumber = 0 ; fourthnumber <= 9; fourthnumber++)
{
if (firstnumber != (secondnumber && thirdnumber && fourthnumber))
{
putchar(firstnumber + '0');
putchar(secondnumber + '0');
putchar(' ');
putchar(thirdnumber + '0');
putchar(fourthnumber + '0');
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
