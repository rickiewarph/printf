#include "main.h"

/**
 * _strlen - function to return the string length
 * @str: pointer to a string
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlen - function applied to the constant character pointer str
 * @str: character pointer
 * Return: i
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
