#include "main.h"
/**
 * handle_flags - prints and integer with specified flags
 * @n: Number to be printed
 * @flags: Modification flags for printing
 * Return: Number of characters printed
 */
int handle_flags(int n, char *flags)
{
	int count = 0;

	if (flags[2] == '#')
	{
		if (n == 0)
			count += write(1, "0", 1);
		else
		{
			if (flags[1] == ' ' || flags[0] == '+')
				count += write(1, "0", 1);
			count += write(1, "x", 1);
		}
	}
	if (n < 0)
	{
		if (flags[0] == '+')
			count += write(1, "-", 1);
		else if (flags[1] == ' ')
			count += write(1, " ", 1);
		n = -n;
	}
	else if (n >= 0 && flags[0] == '+')
		count += write(1, "+", 1);
	char buffer[20];
	int i = 0;

	do	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}	while (n != 0);
	while (i > 0)
	{
		count += write(1, &buffer[--i], 1);
	}
	return (count);
}
