#include "main.h"

/**
 * strcat - function that commute strings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return the value of dest
 */

char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
