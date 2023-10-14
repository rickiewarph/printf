#include "main.h"

/**
 * printf_string - function that prints a string
 * @val: arguments passed through the function
 * Return: string length
 */

int printf_string(va_list val)
{
	char *str;
	int length;
	int i;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
