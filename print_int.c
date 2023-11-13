#include "main.h"
<<<<<<< HEAD

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
=======
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
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea

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
			num = num /10;
=======
			num = num / 10;
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea
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
int print_d(va_list args)
{
	int n = va_args(args, int);
	int num, last = n % 10, digit;
	int i = 1;
=======
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
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea
	int exp = 1;

	n = n / 10;
	num = n;

<<<<<<< HEAD

	if (last < 0)								            {

		_putchar('-');
		num = -num;
		n = -n;									            last = -last;
		i++;
											
=======
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
<<<<<<< HEAD
			num = num /10;
=======
			num = num / 10;
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea
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
>>>>>>> b073df2c633662d922a9ae6bb77d578961127dea
