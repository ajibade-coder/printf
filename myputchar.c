#include <unistd.h>
/**
 * myputchar - writes the character to stdout
 * @character: the character to print
 * Return: one on sucess, on error is minus one
 */

int myputchar(char character)
{
	return (write(1, &character, 1));
}
