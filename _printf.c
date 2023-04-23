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
	char c, *s;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			c = format[i];
			_putchar(c);
			i++;
		}
		num_chars = i;
		if (format[i] == '\0')
			return(num_chars);
		i++;
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(args, int);
				num_chars++;
				break;
			case 's':
				s = va_arg(args, char *)
				num_chars += print_string(s);
				break;
			case 'd':  //Tam's attempt from here till the break
			case 'i':
				num_chars += print_number(va_arg(args, int));
				break;
			case '%':
				c = '%';
				_putchar(c);
				num_chars++;
				break;
<<<<<<< HEAD
			/*case 'd':*/
			/*case 'i':
				num_chars += print_number(va_arg(args, int));
				break;*/
			case 'i': //Tam's try
			{
				int num = va_arg(args, int);
				num_chars += print_number(num);
				break;
			}
=======
			case 'd':
			case 'i':
				num_chars += print_number(va_arg(args, int));
				break;
>>>>>>> parent of ddf24f1... Updated
			default:
				break;
			}
		}
	}
	va_end(args);
	return (num_chars);
}
