#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int s;
	
	for (s = 0; str[s] != 0; s++)
		;
	return (s);
}

/**
 * _strlenc - Strlen functions but applied for constant char pointer str
 * @str: char pointer
 * Return: 1
 */

int _strlenc(const char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
		;
	return (s);
}
