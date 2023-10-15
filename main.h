#ifndef PRINTF_MAIN_H_
#define PRINTF_MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct formats
{
	char specifier;
	int (*function)();
} format_specifiers;

int _putchar(int c);
int _printf(const char *format, ...);
void handle_specifier(const char *format, int i, int *printed_chars,
			format_specifiers *formats_spec, va_list list);

int print_char(va_list list);
int print_string(va_list list);

#endif /* PRINTF_MAIN_H_ */
