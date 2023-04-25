#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - receives input with parameters and print a formatted string
 * @format: string for formatting input
 *
 * Return: The total characters printed
 */
int _printf(const char *format, ...)
{
	int result;
	conver_t func[] = {{"c", print_char}, {"s", print_string},
	{"%", print_percent}, {NULL, NULL}};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	result = process(format, func, args);
	va_end(args);
	return (result);
}
