#include "main.h"

int print_string(va_list list)
{
	int size = 0;
	char *str = va_arg(list, char *);

	if (!(str))
		str = "(null)";

	while (str[size] != '\0')
		size++;

	return (size);
}
