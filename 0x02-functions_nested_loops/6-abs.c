#include "main.h"
/**
 * _abs - function that prints the absolute path value of a number
 * @n: takes ina an integer
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
