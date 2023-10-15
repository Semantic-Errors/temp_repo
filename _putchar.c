#include "main.h"

/**
 * _putchar - function to print a character
 *
 * @c: character to be printed
 *
 * Return: 1 on sucess and -1 on faliure
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
