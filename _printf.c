#include <stdarg.h>
#include "main.h"

/**
 * _printf - Works like the standard library printf
 * @format: format specifer
 * Return: Number of charcters printed
 */
int _printf(char *format, ...)
{
	int num_chars = 0, i;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			c = format[i];
			write(1, &c, 1);
			i++;
		}
		num_chars++;
		if (format[i] == '\0')
			return (num_chars);
		i++;
		switch (format[i])
		{
			case 's':
				s = va_arg(args, char *);
				num_chars += print_string(s);
				break;
			case 'c':
				c = (char) va_arg(args, int);
				write(1, &c, 1);
				num_chars++;
				break;
			case '%':
				c = '%';
				write(1, &c, 1);
				num_chars++;
				break;
			default:
				break;
		}
	}
	va_end(args);
	return (num_chars);
}
