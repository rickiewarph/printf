#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @val: arguments passed
 * Return: string
 */

int print_rev(va_list val)
{
	char *s = va_arg(val, char*);
	int m;
	int n = 0;

	if (s == NULL)
		s = "(null)";
	while (s[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m++)
		_putchar(s[m]);
	return (n);
}
