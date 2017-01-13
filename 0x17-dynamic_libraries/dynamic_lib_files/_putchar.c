#include <unistd.h>
/**
 * _putchar - write one character to stdout
 * @c: the character to be printed
 *
 * Return: 1 one success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
