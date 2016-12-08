#include "holberton.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	int file, err_w, err_c, i;

	mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file == -1)
		return (-1);

	if (!text_content)
	{
		close(file);
		return (1);
	}

	i = 0;
	while (text_content[i])
		i++;

	err_w = write(file, text_content, i);
	if (err_w == -1)
		return (-1);

	err_c = close(file);
	if (err_c == -1)
		return (-1);
	return (1);
}
