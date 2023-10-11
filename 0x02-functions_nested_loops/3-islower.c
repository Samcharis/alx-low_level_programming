#include "main.h"

/**
 * islower - returns 1 if lowercase alphabet if not 0
 * @c: takes in a character
 * Reurn: 0 for uppercase, 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 'a && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
