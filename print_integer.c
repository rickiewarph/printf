#include "main.h"

/**
 * printf_int - prints an integer
 * @args: argument to be printed
 * Return: numbers of printed characters
 */

int printf_int(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;

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
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++
		}
	}
	_putchar(last + '0');
	return (i);
}

/**
 * printf_dec - prints a decimal
 * @args: argument to be printed
 * Return: printed characters
 */

int printf_dec(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;

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
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++
		}
	}
	_putchar(last + '0');
	return (i);
}
