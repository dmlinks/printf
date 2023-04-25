#include "main.h"

/***************PRINT A CHAR************/
/**
 * _putchar - write a character to stdout
 * @c: character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/************** print a string *****************/

/**
 * print_string - prints a string to stdout
 * @args: the list of argument
 * @count: the count of charcters printed so far
 *
 * Return: NUmber of charcater printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

/************ prints an integer ******************************/

/**
 * print_number - prints an interger to stdout
 * @args: the list of argument
 * @count: the count of charcter printed so far
 *
 * Return: Number of characters printed
 */
int print_number(va_list args)
{
	int n = va_arg(args, int;
	int num = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	else
		num = n;

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
	return (i);
}

/********** print a binary *******************************/
/**
 * print_binary - print an unsigned int to binary form
 * @args: the list of argument
 * @count: the count of character printed so far
 *
 * Return: Number of char printed
 */

int print_binary(va_list args, int count)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int mask = 0x80000000;
	int len = 0;

	while (mask > 0)
	{
		if (num & mask)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}
		len++;
		mask >>= 1;
	}

	return (count);
}

/******************** print char ******************/
/**
 * print_char - prints a single chracter
 * @args: the va_list that contains the charcater
 *
 * Return: the number of charcter printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return(1);
}
