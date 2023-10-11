#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Return:1 - if c is lower, otherwise 0
 * @c:a char to be checked
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
