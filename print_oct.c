#include "main.h"

/**
 * print_oct - conversion to octal
 * @val: the variable parameter
 * Return: c
 */

int print_oct(va_list val)
{
	int m, c = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		c++;
	}
	c++;
	array = malloc(sizeof(int) * c);
	for (m = 0; m < c; m++)
	{
		array[m] = tmp % 8;
		tmp = tmp / 8;
	}
	for (m = c - 1; m >= 0; m--)
		_putchar(array[m] + '0');
	free(array);
	return (c);

}
