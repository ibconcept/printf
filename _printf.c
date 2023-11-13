<<<<<<< HEAD
=======
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
>>>>>>> 803c4c0b8c07d88f7172774cdbce27b327ffa724
