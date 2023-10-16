#include "main.h"
/**
 * precision_handle - Calculate the printing precision
 * @f: formated string to print arguments
 * @i: list of printed arguments
 * @l: list of arguments
 * Return: P
 */
int precision_handle(const char *f, int *i, va_list l)
{
	int c_idx = *i + 1;
	int p = -1;

	if (f[c_idx] != '.')
		return (p);

	p = 0;

	for (c_idx += 1; f[c_idx] != '\0'; c_idx++)
	{
		if ('0' <= f[c_idx] && f[c_idx] <= '9')
		{
			p *= 10;
			P += f[c_idx] - '0';
		}
		else if (f[c_idx] == '*')
		{
			c_idx++;
			p = va_arg(l, int);
			break;
		}
		else
			break;
	}
	*i = c_idx - 1;
	return (p);
}
