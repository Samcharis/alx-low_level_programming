#include "main.h"

/**
 * _puts_recurstions - prints a string, followed by a new line
 * @s: the string is printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
