#include <unistd.h>

/**
 * _putchar - A function that prints a charater
 * @c: A charater to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
