#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * prt_c - prints out char types
 * @elements: the va_list of elements
 */
void prt_c(va_list elements)
{
	printf("%c", va_arg(elements, int));
}
/**
 * prt_i - prints out int types
 * @elements: the va_list of elements
 */
void prt_i(va_list elements)
{
	printf("%i", va_arg(elements, int));
}
/**
 * prt_f - prints out float types
 * @elements: the va_list of elements
 */
void prt_f(va_list elements)
{
	printf("%f", va_arg(elements, double));
}
/**
 * prt_s - prints out type char*
 * @elements: the va_list of elements
 */
void prt_s(va_list elements)
{
	char *tmp_str;

	tmp_str = va_arg(elements, char*);
	if (tmp_str == NULL)
	{
		tmp_str = "(nil)";
	}
	printf("%s", tmp_str);
}

/**
 * print_all - print any element that is passed
 * @format: a string of the data types in the order of given elements
 */
void print_all(const char * const format, ...)
{
	int j, i;
	va_list elements;
	t_prt type_prt[] = {
		{"c", prt_c},
		{"i", prt_i},
		{"f", prt_f},
		{"s", prt_s},
		{NULL, NULL}
	};
	char *sep = "";

	va_start(elements, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == type_prt[j].data_type[0])
			{
				printf("%s", sep);
				type_prt[j].prt(elements);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(elements);
}
