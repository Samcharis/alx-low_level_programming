#include "main.h"

/**
 * factorial - returns the factorialof a number
 * @n: number to return the factorial from
 *
 * Retrun: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
