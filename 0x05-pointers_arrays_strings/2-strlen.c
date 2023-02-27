#include "main.h"
/**
 * _strlen - this function returns the length of a string
 * @s: string to be considered
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
