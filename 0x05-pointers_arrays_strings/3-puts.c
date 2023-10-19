#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: pointer to the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int f = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}

	_putchar('\n');
}
