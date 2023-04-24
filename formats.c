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

int print_numbers(void *i, int base, char cap)
{
	int k, kcopy, count = 0, power_10;
	char c;
	unsigned int j, power_other;

	if (base == 10)
	{
		(void) j;
		(void) power_other;
                (void) cap;
		k = *(int *) i, kcopy = k;
		for (power_10 = 1; kcopy / 10; kcopy /= 10, power_10 *= 10);
                k < 0 ? write(1, "-", 1) : write(1, "", 1);
                k < 0 ? count++ : count;
		while (power_10)
		{
			c = k < 0 ? -((k / power_10) % 10) + '0': ((k / power_10) % 10) + '0';
			write(1, &c, 1);
			count++;
			power_10 /= 10;
		}
	}
	return (count);
}
