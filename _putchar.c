#include "main.h"

/**
 * _putchar - function to write character to standard output
 * @c: the character to be printed
 * Return: 1(success) -1(failure and sets error appropriately)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
