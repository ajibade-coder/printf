#include "main.h"

/**
* handle_d - This function is for integer handling
*
* @num: number to be printed
* Return: returns the total number of string
*/

int handle_d(int num)
{
	char *str = _int_to_str(num);
	int i;
	char *temp;

	i = 0;
	temp = str;
	if (temp == NULL)
	{
		free(str);
		return (i);
	}
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
		i++;
	}
	free(str);
	return (i);
}

#include <stdlib.h>
#include "main.h"

/**
* handle_bin - this function handles %b for binary
* @num: unsigned int
* Return: count of printed number
*/

int handle_bin(unsigned int num)
{
	int rem, count, i;
	int j = 0;
	int *str = malloc((sizeof(int) * 100) + 1);

	if (str == 0)
		return (0);
	str[0] = 0;
	if (num == 0)
	{
		j = _putchar('0');
		free(str);
		return (j);
	}
	while (num != 0)
	{
		rem = num % 2;
		str[j] = rem + 48;
		j++;
		num /= 2;
	}
	count = 0;
	i = j - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
		count++;
	}
	free(str);
	return (count);
}

/**
* handle_S - prints a string with custom formatting
*
* @str: string to be formatted
* Return: number of chars printed
*/

int handle_S(char *str)
{
	int i = 0, count = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c  < 32) || c >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar('0');
			count += dec_to_hex('X', (unsigned int)c);
		}
		else
		{
			count += _putchar(c);
		}
		i++;
	}
	return (count);
}
