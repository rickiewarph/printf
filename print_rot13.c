#include "main.h"

/**
 * print_rot13 - function for rot13 conversion
 * @val: arguments passed
 * Return: c
 */

int print_rot13(va_list val)
{
	int i, j, c = 0;
	int k = 0;
	char *s = va_arg(val, char*);
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
