#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Pointer to format string
 * Return: Number of charcters printed
 * excluding null byte
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
					num_chars += _puts(va_arg(args, char *));
					break;
				case '%':
					_putchar(c);
					num_chars++;
					break;
				default:
					_putchar('%');
					_putchar(c);
					num_chars += 2;
					break;
			}
		}
	}
	va_end(args);

	return (num_chars);
}
