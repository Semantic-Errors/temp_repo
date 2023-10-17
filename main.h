#ifndef PRINTF_MAIN_H_
#define PRINTF_MAIN_H_

#include <unistd.h>
#include <stdarg.h>

typedef struct formats
{
	char specifier;
	int (*function)();
} format_specifiers;

/**
 * struct flags - struct containing plus hash space flags
 * it's turned on when a flag specifier is passed to _printf()
 * @plus: flag for the "+" character
 * @space: flag for the " " character
 * @hash: flag for the "#" character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} diff_flags;
/* putchar */
int _putchar(int c);
/* new printf */
int _printf(const char *format, ...);
void handle_specifier(const char *format, int i, int *printed_chars,
			format_specifiers *formats_spec, va_list list);

int print_char(va_list list);
int print_string(va_list list);
int print_integer(va_list list);
/* int to binary */
int print_int_tobinary(va_list list);
/* get flag */
int get_flag_p_s_h(char spec, flags *f);

#endif /* PRINTF_MAIN_H_ */
