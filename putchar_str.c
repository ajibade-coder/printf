#include "main.h"
/**
 * put_str - a func that print out a string
 * @string: string parameter
 * Return: index
 */

int put_str(char *string)
{
	int index = 0;
	int len = 0;

	if (string)
	{
		while (string[index] != '\0')
		{
			myputchar(string[index]);
			len += 1;
			index++;
		}
	}
	return (index);
}
