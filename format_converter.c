#include "main.h"
#include <unistd.h>

/*==================== PUTCHAR ===============================*/

/**
 * _putchar - A function that prints a charater
 * @c: A charater to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/** ==============PRINTS STRING ==================================*/

/**
 * _puts - A function that prints a string to stdout
 * @str: Pointer to string to print
 * Return: Number of characters printed.
 */
int print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);

	return (i);

/* ======================== PRINT NUMBER (%i) ======================*/

/**
 * print_number - Prints an integer to stdout
 * @num: Interger to print
 *
 * Return: Number of charcter printed
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
		num_chars += print_number(num / 10);

	_putchar((num % 10) + '0');
	num_chars++;

	return (num_chars);
}
/* ======================== PRINT INTEGER (%d) ======================*/

/**
 * print_integer - Prints an integer to stdout
 * @num: Interger to print
 *
 * Return: Number of charcter printed
 */
int print_integer(int num)
{
	return (print_number(num));
}
