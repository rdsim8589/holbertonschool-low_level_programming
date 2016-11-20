#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * prt_c - prints out char types
 */
void prt_c(va_list ele)
{
	printf("%c", va_arg(ele, int));
}
/**
 * prt_i - prints out int types
 */
void prt_i(va_list ele)
{
	printf("%i", va_arg(ele, int));
}
/**
 * prt_f - prints out float types
 */
void prt_f(va_list ele)
{
	printf("%f", va_arg(ele, double));
}
/**
 * prt_s - prints out type char*
 */
void prt_s(va_list ele)
{
	char *tmp_str;

	tmp_str = va_arg(ele, char*);
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
	printf("error3");
	va_start(elements, format);
	if (format != NULL)
	{
		printf("error1");
		i = 0;
		while (format[i] != '\0')
		{
			printf("error2");
			j = 0;
			while (format[i] != type_prt[j].data_type[0]
			       && type_prt[j].data_type != NULL)
			{
				j++;
			}
			type_prt[j].print(elements);
			i++;
		}
		printf("\n");
		va_end(elements);
	}
}
