#include "holberton.h"
/**
 * append_text_to_file - append a text to the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, err_c, err_w, i;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND, S_IRUSR);
	if (file == -1)
		return (-1);

	if (!text_content)
	{
		err_c = close(file);
		if (err_c == -1)
			return (-1);
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
