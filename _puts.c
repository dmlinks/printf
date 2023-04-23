#include "main.h"

/**
 * _puts - A function that prints a string to stdout
 * @str: Pointer to string to print
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
	int num_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		num_chars++;
		str++
	}

	return (num_chars);
}
