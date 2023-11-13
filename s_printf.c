#include "main.h"
/**
 * print_s - prints a string
 * @var: argument
 * Return: the length of the string
 *
 */
int print_s(va_list var)
{
	char *str;
	int s;
	int length;

	str = va_arg(var, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (s = 0; s < length; s++)
			_putchar(str[s]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (s = 0; s < length; s++)
			_putchar(str[s]);
		return (length);
	}
