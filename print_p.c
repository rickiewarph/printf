#include "main.h"

/**
 * print_pointer - prints a pointer
 * @val: the value
 * Return: b
 */

int print_pointer(va_list val)
{
	void *p;
	char *y = "(nil)";
	int i;
	int b;
	long int a;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; y[i] != '\0'; i++)
			_putchar(y[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hextra(a);
	return (b + 2);

}
