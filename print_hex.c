#include "main.h"

/**
 * print_hex - function to be used in hexadecimal conversion
 * @val: the value to convert
 * Return: c
 */

int print_hex(va_list val)
{
	int m, c = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		c++;
	}
	c++;
	array = malloc(sizeof(int) * c);
	for (m = 0; m < c; m++)
	{
		array[m] = tmp % 16;
		tmp = tmp / 16;
	}
	for (m = c - 1; m >= 0; m--)
	{
		if (array[m] > 9)
			array[m] = array[m] + 39;
		_putchar(array[m] + '0');
	}
	free(array);
	return (c);
}

