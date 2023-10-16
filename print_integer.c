#include "main.h"

int get_exp(int number)
{
	int exponent = 1;

	while ((number / exponent) >= 10)
		exponent *= 10;
	return (exponent);
}


int print_integer(va_list list)
{
	int temp, printed_digits = 0;
	int number = va_arg(list, int);

	if (number < 0)
		printed_digits += _putchar('-'), number *= -1;

	for (temp = get_exp(number); temp; number %= temp, temp /= 10)
		printed_digits += _putchar(number / temp + '0');

	return (printed_digits);

}
