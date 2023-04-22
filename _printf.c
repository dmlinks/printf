#include "main.h"

/**
 * _printf - A function that acts exactly like the standard printf function
 * @format: A string containing format specifers
 * @...: Other arugments
 *
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int num_chars = 0;
	char c, *str;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					num_chars++;
					break;
				case 's':
					str = va_arg(args, char *);

					while (*str != '\0')
					{
						_putchar(*str);
						str++;
						num_chars++;
					}
					break;
				case '%':
					_putchar('%');
					num_chars++;
					break;
			}
		} else
		{
			_putchar(*format);
			num_chars++;
		}
		format++;
		}
	va_end(args);
	return (num_chars);
}
