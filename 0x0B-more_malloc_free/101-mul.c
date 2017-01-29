#include <stdlib.h>

/**
 *
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - gets the str len and if all char are numbers
 *
 *
 */
int strlen_check(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str [i] > '9')
			return (-1);
	}
	return (i);
}
/**
 *
 */
void _error(void)
{
	int i;

	error_str[] = "Error";
	for (i = 0; error_str[i] != '\0'; i++)
		_putchar(error_str[i]);
	_putchar('\n');
}


/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: number of members
 * @size: the size of the type
 *
 * Return: a void type created through malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *char_ary;
	int ary_size, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ary_size = nmemb * size;
	array = malloc(ary_size);

	if (array == NULL)
		return (NULL);

	char_ary = array;
	for (i = 0; i < ary_size; i++)
		char_ary[i] = 0;
	return (array);
}

/**
 * _realloc - reallocates memory using malloc and free.
 * @ptr: a pointer to a void that is create by malloc
 * @old_size: the size of the old allocated memory
 * @new_size: the size of the new allocated memory
 *
 * Return: a pointer to a void with the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ary;
	char *temp_ary;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ary = malloc(new_size);
		if (new_ary == NULL)
			return (NULL);
		free(ptr);
		return (new_ary);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	new_ary = malloc(new_size);
	temp_ptr = ptr;
	if (new_ary == NULL)
		return (NULL);
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new_ary[i] = temp_ptr[i];
	}
	else if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			new_ary[i] = temp_ptr[i];
	}
	free(ptr);
	return (new_ary);
}

/**
 * rev_string - reverses a string
 * @s: a pointer of a string
 */

void rev_string(char *s)
{
	int m, len_s;
	char* tmp;

	len_s = strlen_check(s);
	tmp = malloc(len_s * sizeof(char));
	for (m = 0; m <= n; m++)
	{
		tmp[m] = s[len_s - 1 - m]; /*-1 account for index*/
	}
	for (m = 0; m <= n; m++)
	{
		s[m] = tmp[m];
	}
}

/**
 */
int main(int arc, char **argv)
{
	int str1_len, str2_len, master_len, tmpsum, remain;
	int i_1, i_2, i_m, i_t, i_c;
	int *tmp_ary;
	char *master;
	char *new_master;

/*get the string && test if there are char in str or more than 2 num*/
	str1_len = strlen_check(argv[1]);
	str2_len = strlen_check(argv[2]);
	if (argc - 1 != 2 || str1_len < 0 || str2_len < 0)
	{
		_error();
		exit(98);
	}
	if(argv[1] == '0' || argv[2] == '0')
	{
		_putchar('0');
		return (0);
	}
	master_len = str1_len +str2_len;
/* master Malloc */
	master = _calloc(master_len, sizeof(char));
	if (master == NULL)
		return (NULL);
	i_m = 0;
/* loop to determine the tmp array*/
	for (i_1 = str1_len - 1; i_1 >= 0; i--)
	{
		tmp_ary = malloc(str1_len * sizeof(int));
		if (tmp_ary == NULL)
			return (NULL);
/*loop argv[2] to constucte the tmp array with*/
		i_t = 0;
/*test to see if you need to reset remain*/
		remain = 0;
		for (i_2 = str2_len - 1; i_2 >= 0; i--)
		{
			tmp_ary[i_t] = atoi(argv[1][i_1]) * atoi(argv[2][i_2]);
/*char ==> int addition ==> char storage*/
			tmpsum = atoi(master[i_m + i_t]) + tmp_ary[i_t] + remain;
			master[i_t + i_m] = (tmp_ary[i_t] % 10) + '0';
			remain = tmp_ary[i_t] / 10;
			i_t++;
		}
		free(tmp_ary);
		i_m++;
	}
	master[i_m] = '\0';
/*determine how many trailing 0 and remove them*/
	for (i_c = master_len - 1; master[i_c] != 0; i_c--)
	{
	}
	new_master = _realloc(master, master_len, i_1 + 1);
	new_master(i_1 + 1) = '\0';
	free(master);
/*switch the string from back to front*/
	rev_string(new_master);
}
