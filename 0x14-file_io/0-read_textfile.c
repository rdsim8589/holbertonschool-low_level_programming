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
	ssize_t file_descrip, n, total;
	size_t i;
	char buf[BUF_SIZE];

	if (filename == NULL)
		return (0);
	file_descrip = 	open(filename, O_CREAT | S_IRUSR, 400 | S_IWUSR, 200);
	if (file_descrip == -1)
		return (0);

	total = 0;
	while (i < letters)
	{
		n = read(file_descrip, buf, BUF_SIZE);
		write(1, buf, BUF_SIZE);
		i += BUF_SIZE;
		total += n;
		buf[BUF_SIZE] = '\0';
	}
	close(file_descrip);
	return(total);

}
