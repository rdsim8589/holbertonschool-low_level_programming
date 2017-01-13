#include <unistd.h>
/**
 * _puts - writes a string to stdout
 * @s: the string to write to stdout with a newline char
 */
void _puts(char *s)
{
	unsigned int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	write(1, s, i);
	write(1, &("\n"), 1);
}
