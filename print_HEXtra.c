#include "main.h"

/**
 * print_HEXtra - function to be used in hexadecimal conversion
 * @num: the value to convert
 * Return: c
 */

int print_HEXtra(unsigned int num)
{
	int m, c = 0;
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
	for (m = c - 1; m >= 0; m++)
	{
		if (array[m] > 9)
			array[m] = array[m] + 7;
		_putchar(array[m] + '0');
	}
	free(array);
	return (c);
}

