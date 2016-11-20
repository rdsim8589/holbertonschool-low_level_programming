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
	int num_hold;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num_hold = va_arg(numbers, int);
		if (separator != NULL)
		{
			if (i == n - 1)
				printf("%d", num_hold);
			else
				printf("%d%s", separator);
		}
		else if (separator == NULL)
			printf("%d", num_hold);

	}
	printf("\n");
	va_end(numbers);

}
