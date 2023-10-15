#include "main.h"
/**
 * active_flags_det - calculates all active flags
 * @format: string formated  for flag processing
 * @index: flag position in the string
 * Return: calculated flags
 */
int active_flags_det(const char *format, int *index)
{
	int j, current_index;
	int flags = 0;
	const char FLAG_CHARS[] = {'-', '+', '0' '#', ' ', '\0'};
	const int FLAG_VALUES[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (current_index = *index + 1; format[current_index] != '\0'; current_index++)

	{
		if (format[current_index] == '%') 
		{
			break;

		}
		for (j = 0; FLAG_CHARS[j] != '\0'; j++)

		{
			if (format[current_index] == FLAG_CHARS[j]) 
			{
				flags |= FLAG_VALUES[j];
				break;
			}
		}
		if (FLAG_CHARS[j] == 0) 
		{
			break;
		}
	}
	*index = current_index - 1;
	return (flags);
}
