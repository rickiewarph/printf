#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define F_MINUS 0x01
#define F_PLUS 0x02
#define F_ZERO 0x04
#define F_HASH 0x08
#define F_SPACE 0x10

/**
 * struct format - structure
 * @id: characters
 * @f: integers
 * Return: 0
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(const char *str);
int _strleng(char *str);
int print_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);
int print_binary(va_list val);
int print_rot13(va_list val);
int printf_unsigned_int(va_list args);
int print_oct(va_list val);
int print_hextra(unsigned long int num);
int print_hex(va_list val);
int print_STRING(va_list val);
int PRINT_HEX(va_list val);
int print_HEXtra(unsigned int num);
int print_pointer(va_list val);
int print_rev(va_list val);
int active_flags_det(const char *format, int *index);
int width_calc(const char *format, int *index, va_list args);
int precision_handle(const char *f, int *i, va_list l);
int is_digit(char c);

#endif
