#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string return
 *
 * Return: length of string (success)
 * _strlen - this will print out the length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
