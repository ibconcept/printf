#include "main.h"

/**
 * _printf_char - prints a char
 * @var: arguments
 * Return: 1
 */
int _printf_char(va_list var)
{
	char str;

	str = va_arg(var, int);
	_putchar(str);
	return (1);
}
