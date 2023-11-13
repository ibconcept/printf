#include "main.h"
<<<<<<< HEAD
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;
=======

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of charaters printed
 */
int print_int(va_list args)
{
	int n = va_args(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
<<<<<<< HEAD
			num = num / 10;
=======
			num = num /10;
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

<<<<<<< HEAD
/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
=======
int print_d(va_list args)
{
	int n = va_args(args, int);
	int num, last = n % 10, digit;
	int i = 1;
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a
	int exp = 1;

	n = n / 10;
	num = n;

<<<<<<< HEAD
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
=======

	if (last < 0)								            {

		_putchar('-');
		num = -num;
		n = -n;									            last = -last;
		i++;
											
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
<<<<<<< HEAD
			num = num / 10;
=======
			num = num /10;
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

<<<<<<< HEAD
	return (i);
}
=======

	return (i);

}	
>>>>>>> ce0b4f8976dffc7a96f12fd53d0f556cb33f733a
