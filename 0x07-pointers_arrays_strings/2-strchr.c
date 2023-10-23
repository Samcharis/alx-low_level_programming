#include "main.h"

/**
 * _strchr - locate character inn a string
 * @s: char array string
 * @c: char to locate
 * Return: NULL if char is not found, or pointer to @c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		++s;

	}

	return (s + 1);
}
