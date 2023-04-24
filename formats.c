#include "main.h"

/**
 * print_string - Prints a string followed by a new line
 * @str: Pointer to string to print.
 * Return: Number of string printed
 */

int print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}
	return (i);
}
