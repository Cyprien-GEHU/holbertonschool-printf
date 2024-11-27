#ifndef MAIN_FILE
#define MAIN_FILE
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_37(va_list);
int (*get_function(const char *format))(va_list list);
int _putchar(char c);

/**
 * struct specifier - struct comparer and call function
 * @letter : letter for compare with format
 * @function : call a function for print
 *
 */

typedef struct specifier
{
	char *letter;
	int (*function)(va_list arugment);
} spec;

#endif
