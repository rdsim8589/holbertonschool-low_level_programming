#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0 if correct
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
