#include "main.h"

/**
* handle_s - this function will handle all strings
*
* @str: pointer to string
* @c: specifier
* Return: returns total number of string printed
*/

int handle_s(char c, char *str)
{
	int i, j;
	char err[7] = "(null)";

	i = 0;
	j = 0;
	if (str == NULL)
	{
		while (err[j] != '\0')
		{
			_putchar(err[j]);
			j++;
			i++;
		}
	}
	else if (c == 'S' && str != NULL)
	{
		i += handle_S(str);
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}

/**
* handle_r - this function handles r and R specifier
* @c: the specifier
* @str: the string to work with
* Return: returns number of chars printed
*/

int handle_r(char c, char *str)
{
	int i, count;
	char *result = (char *)malloc(sizeof(char) * strlen(str));
	int j =  0;

	count = 0;
	if (c == 'R')
	{
		count += rot13(str);
	}
	else
	{
		if (result == NULL)
		{
			free(result);
			return (0);
		}
		for (i = (strlen(str) - 1); i >= 0; i--)
		{
			result[j] = str[i];
			_putchar(result[j]);
			j++;
			count++;
		}
	}
	return (count);
}

/**
* handle_oct - This will handle all %o
* @num: the num to convert to octal format
* Return: return length of num
*/

int handle_oct(unsigned int num)
{
	int rem, count, i;
	int j = 0;
	int *str = malloc((sizeof(int) * 12) + 1);

	if (str == 0)
		return (0);
	str[0] = 0;
	while (num != 0)
	{
		rem = num % 8;
		str[j] = rem + 48;
		j++;
		num /= 8;
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
* handle_non_spec - for handling non specifiers
* @c: character
* Return: num of char printed
*/

int handle_non_spec(char c)
{
	int i = 0;

	if (c == '%')
		i += _putchar('%');
	else
	{
		i += _putchar('%');
		i += _putchar(c);
	}
	return (i);
}
