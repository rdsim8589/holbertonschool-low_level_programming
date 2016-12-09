#include "holberton.h"
/**
 * read_textfile - reads a text file and print it to the POSIX standard output.
 * @filename: a pointer to the string of the file name
 * @letters: letters is the number of letter it should read and print
 *
 * Return: the actual num of letters it can read and print
 * or 0 if filename == NULL, or file can not be read, or opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descrip;
	ssize_t  err_w, err_c, err_r;
	char *buf;

	if (filename == NULL)
		return (0);

	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	err_r = read(file_descrip, buf, letters);
	if (err_r == -1)
	{
		free(buf);
		return (0);
	}
	if (err_r > 0)
		err_w = write(STDOUT_FILENO, buf, letters);
	if (err_w == -1)
	{
		free(buf);
		return (0);
	}
	err_c = close(file_descrip);
	if (err_c == -1)
	{
		free(buf);
		return (0);
	}
	free (buf);
	return (err_w);
}
