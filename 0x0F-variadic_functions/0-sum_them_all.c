#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - sums all the parameters given
 * @n:the amount of parameters given
 *
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum;

	sum = 0;
	va_start (arguments, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg (arguments, int);
	}
	va_end(arguments);
	return(sum);

}
