#include "holberton.h"

/**
 * main - prints Holberton
 *
 * Description: only allowed to use _putchar to print Holberton
 * Return: On success 0
 */

int main(void)
{
	char a[] = "Holberton";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar(\n);
	return (0);
}
