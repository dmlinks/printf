#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: va_list containing the unsigned int argument to print
 * Return: number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int divisor = 1, i = 0;

	while ((n / divisor) > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
		i++;
	}

	return (i);
}

/**
 * print_octal - prints an unsigned integer in octal notation
 * @args: va_list containing the unsigned int argument to print
 * Return: number of digits printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int octal_num[100];
	int i = 0, j;

	while (n != 0)
	{
		octal_num[i] = n % 8;
		n /= 8;
		i++;
	}

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal_num[j] + '0');
	}

	return (i);
}

/**
 * print_hex - prints an unsigned integer in hexadecimal notation (lowercase)
 * @args: va_list containing the unsigned int argument to print
 * Return: number of digits printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char hex_num[100];
	int i = 0, j;

	while (n != 0)
	{
		int temp = 0;
		temp = n % 16;
		if (temp < 10)
			hex_num[i] = temp + 48;
		else
			hex_num[i] = temp + 87;
		n /= 16;
		i++;
	}

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex_num[j]);
	}

	return (i);
}

/**
 * print_hex_upper - prints an unsigned integer in hexadecimal notation (uppercase)
 * @args: va_list containing the unsigned int argument to print
 * Return: number of digits printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char hex_num[100];
	int i = 0, j;

	while (n != 0)
	{
		int temp = 0;
		temp = n % 16;
		if (temp < 10)
			hex_num[i] = temp + 48;
		else
			hex_num[i] = temp + 55;
		n /= 16;
		i++;
	}

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex_num[j]);
	}

	return (i);
}

