#include "main.h"

/**
 * _printf - custom implementation of printf
 * @format: format string containing the characters and the specifiers
 *
 * This function produces output according to a format string containing
 * characters and conversion specifiers. It determines which printing function
 * to call depending on the conversion specifiers contained in the format string.
 * The function supports flags such as '-' (left justify), '+' (print sign),
 * and ' ' (print space before positive number), as well as width and precision
 * modifiers.
 *
 * Return: the number of characters printed (excluding the null byte), or
 *         -1 if there is an error
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {.minus = 0, .plus = 0, .space = 0};
	int count = 0;

	va_start(arguments, format);

	if (!format)
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			if (!pfunc)
				count += _putchar('%') + _putchar(*p);
			else
				count += pfunc(arguments, &flags);
		}
		else
			count += _putchar(*p);
	}
	_putchar(-1);

	va_end(arguments);

	return (count);
}
