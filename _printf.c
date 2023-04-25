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
	int num_chars = 0, i;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1)

			switch (format[i])
			{
				case 'c':
					num_chars += print_char(args);
					break;
				case 's':
					num_chars += print_string(args);
					break;
				case 'd':
				case 'i':
					num_chars += print_number(args);
					break;
				case '%':
					num_chars += _putchar('%');
					break;
				case 'b':
					num_chars += print_binary(args);
					break;
				case 'o':
					num_chars += print_octal(args);
					break;
				case 'x':
					num_chars += print_hex(args);
					break;
				case 'X':
					num_chars += print_hex_upper(args);
					break;
				case 'u':
					num_char += print_unsigned(args);
					break;
				default:
					break;
			}
		}
		else
			num_chars += _putchar(format[i]);
	}
	va_end(args);
	return (num_chars);
}
