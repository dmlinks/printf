#include "main.h"

/**
 * _printf - Works like the standard printf
 * @format: Pointer to format string
 *
 * Return: number of characters printed (except null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int num_chars = 0, i = 0;
	char c;

	va_start(args, format);

	while ((c = format[i++]) != '\0')
	{
		if (c != '%')
		{
			_putchar(c);
			num_chars++;
		}
		else
		{
			c = format[i++];
			switch (c)
			{
				case 'c':
					_putchar(va_arg(args, int));
					num_chars++;
					break;
				case 's':
					num_chars += print_string(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					num_chars += print_number(va_arg(args, int));
					break;
				case '%':
					_putchar(c);
					num_chars++;
					break;
				default:
					break;
			}
		}
	}
	va_end(args);
	return (num_chars);
}
