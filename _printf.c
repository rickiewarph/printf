#include "main.h"

/**
 * _printf - works like printf
 * @format: identifier
 * Return: int
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", print_37}, {"%d", printf_dec}, {"%i", printf_int},
		{"%r", print_rev}, {"%R", print_rot13}, {"%b", print_binary},
		{"%u", printf_unsigned_int}, {"%o", print_oct}, {"%x", print_hex},
		{"%X", PRINT_HEX}, {"%S", print_STRING}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (format[i] == '\0')
			{
				break;
			}
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
