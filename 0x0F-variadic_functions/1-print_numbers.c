#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: num of into passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	{
		va_start(numbers, n);
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(numbers, int), separator);
			else
				printf("%d", va_arg(numbers, int));
		}
		printf("%d\n", va_arg(numbers, int));
		va_end(numbers);
	}
}
