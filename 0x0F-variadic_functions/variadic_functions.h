#ifndef VARIADIC_GUARD
#define VARIADIC_GUARD
/**
 * struct type_print - struct type_print
 * @data_type: the data type
 * @print: the function associated
 */
typedef struct type_print
{
	char *data_type;
	void (*print)();
} t_prt;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
