#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - performs the opertaions ask by a user
 * @s: the operator
 *
 * Return: a pointer to the function of the correct operator
 */
int (*get_op_func(char *s)) (int, int)
{
	/*	char operators[] = "+-/%"

	int (*op_func[5]) (int, int) = {&op_add, &op_sub,
					&op_mul, &op_div, &op_mod};
*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if  (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}