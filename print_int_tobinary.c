#include "main.h"

int convert_to_binary(int number, int *binary_number)
{
	int size = 0;

	while (number) {
		binary_number[size++] = number % 2;
		number /= 2;
	}

	return (size - 1);
}

int print_int_tobinary(va_list list)
{
	int printed_chars = 0;
	int binary_number[64] = {0};
	int number = va_arg(list, int);
	int i = convert_to_binary(number, binary_number);

	for (; i >= 0; i--)
		printed_chars += _putchar(binary_number[i] + '0');

	return (printed_chars);
}
