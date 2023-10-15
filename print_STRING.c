#include "main.h"

/**
 * print_STRING - prints a string
 * @val: the value to consider
 * Return: characters printed
 */

int print_STRING(va_list val)
{
	char *s;
	int value;
	int m, len = 0;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] < 32 || s[m] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[m];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEXtra(value);
		}
		else
		{
			_putchar(s[m]);
			len++;
		}
	}
	return (len);
}
