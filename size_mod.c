#include "main.h"
/**
 * size_mod - Calculates size for type casting the argument
 * @format: string format process
 * @index: Position in the string
 * Return: appropriate size for type casting.
 */
int size_mod(const char *format, int *index)
{
	int current_index = *index + 1;
	int size = 0;

	if (format[current_index] == 'l')
		size = SIZE_LONG;
	else if (format[current_index] == 'h')
		size = SIZE_SHORT;

	if (size == 0)
		*index = current_index - 1;
	else
		*index = current_index;
	return (size);
}
