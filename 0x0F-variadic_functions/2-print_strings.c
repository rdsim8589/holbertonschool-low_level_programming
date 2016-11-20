#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: The number of strings being passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str_holder;

	if (separator != NULL)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			str_holder = va_arg(strings, char*);
			if (str_holder != NULL)
			{
				if (i == n - 1)
					printf("%s\n", str_holder);
				else
					printf("%s%s", str_holder, separator);
			}
			else
			{
				if (i == n - 1)
					printf("(nil)\n");
				else
				printf("(nil)%s", separator);
			}
		}
		va_end(strings);
	}

}
