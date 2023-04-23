#include "main.h"
#include <stdio.h>
/**
 * _printf - Produces output according to a format
 * @format: Pointer to format string
 *
 * Return: Number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				if (*format == 'd' || *format == 'i')
				{
					int arg = va_arg(args, int);
					char str[12];

					sprintf(str, "%d", arg);
					count += print_string(str);
				}
				else
				{
				}
			}
			else
			{
				count += _putchar(*format);
			}
			format++;
		}

		va_end(args);
		return (count);
}

