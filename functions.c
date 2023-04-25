#include "main.h"

/***************PRINT A CHAR************/
/**
 * _putchar - write a character to stdout
 * @c: character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/************** print a string *****************/

/**
 * print_string - prints a string to stdout
 * @str: pointer to strin gto prnt
 *
 * Return: NUmber of charcater printed
 */
int print_string(char *str)
{
	int num_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		num_chars++;
		str++;
	}

	return (num_chars);
}

/************ prints an integer ******************************/

/**
 * print_number - prints an interger to stdout
 * @num: interger to print
 *
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int num_chars = 0;

	if (num < 0)
	{
		_putchar('-');
		num_chars++;
		num = -num;
	}

	if (num / 10)
	{
		num_chars += print_number(num / 10);
	}
	_putchar((num % 10) + '0');
	num_chars++;

	return (num_chars);
}
