#include "main.h"

/**
 * _printf_char - prints a char
 * @val: arguments
 * Return: 1
 */
int _printf_char(va_list var)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
