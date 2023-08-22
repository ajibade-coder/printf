#include "main.h"
/**
 * print_integer - func to print int
 * @value: 1st parameter
 * Return: int len
 */

int print_integer(int value)
{
	char buffer[32];
	int len = 0;
	int j;
	int i;

	if (value < 0)
	{
		myputchar('-');
		len++;
		value = -value;
	}

	i = 0;

	do {
		buffer[i++] = '0' + (value % 10);
		value /= 10;
		len++;
	} while (value > 0);

	for (j = i - 1; j >= 0; j--)
	{
		myputchar(buffer[j]);
	}
	return (len);
}
