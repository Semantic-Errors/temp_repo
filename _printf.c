#include "main.h"

int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	va_list list;

	format_specifiers formats_spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_integer},
		{'d', print_integer},
		{'b', print_int_tobinary},
		{'\0', NULL}
	};


	if (!(*format))
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			handle_specifier(format, ++i, &printed_chars, formats_spec, list);

			if (printed_chars == -1)
				return (printed_chars);
		}
		else
			printed_chars += _putchar(format[i]);
	}

	va_end(list);
	return (printed_chars);
}


void handle_specifier(const char *format, int pos, int *printed_chars,
					format_specifiers *formats_spec, va_list list)
{
	int i = 0;

	while (formats_spec[i].specifier != '\0'
		&& format[pos] != formats_spec[i].specifier)
		i++;

	if (formats_spec[i].specifier != '\0')
		*printed_chars += formats_spec[i].function(list);
	else
	{
		if (!(format[pos]))
		{
			*printed_chars = -1;
			return;
		}

		if (format[pos] != '%')
			*printed_chars += _putchar('%');
		*printed_chars += _putchar(format[pos]);
	}
}
