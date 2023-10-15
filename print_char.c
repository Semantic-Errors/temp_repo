#include "main.h"

/**
 *
 */

int print_char(va_list list)
{
	int arg = va_arg(list, int);

	return (_putchar(arg));
}
