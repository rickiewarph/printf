#include "main.h"
/**
 * is_digit - checks if character is a digit
 * @c: character to check
 * Return: 1 if true, 0 if false
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * width_calc - Determines the printing width
 * @format: Format string to process
 * @index: Position in string
 * @args: arguments list
 * Return: Calculated width
 */
int width_calc(const char *format, int *index, va_list args)
{
	int i = *index + 1;
	int width = 0;

	for (; format[i] != '\0'; i++)
	{
		if (isdigit(format[i]))
		{
			width *= 10;
			width += format[i] - '0';
		}
		else if (format[i] == '*')
		{
			width = va_arg(args, int);
			break;
		}
		else
		{
			break;
		}
	}
	*index = i - 1;
	return (width);
}
