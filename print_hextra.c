#include "main.h"

/**
 * print_hextra - function to be used in long int conversion
 * @num: the value to convert
 * Return: c
 */

int print_hextra(unsigned long int num)
{
	long int m, c = 0;
	long int *array;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		c++;
	}
	c++;
	array = malloc(sizeof(long int) * c);
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

