#include "holberton.h"

/**
 * main - copies the content of a file to another
 * @argc: the number of the arguments given
 * @argv: a pointer to the name of the files
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int file_to, file_from, r_file, w_file, c_file;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	r_file = 1;
	while (r_file)
	{
		r_file = read(file_from, buf, BUF_SIZE);
		if (r_file == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
		if (r_file > 0)
		{
			w_file = write(file_to, buf, r_file);
			if (w_file == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	c_file = close(file_from);
	if (c_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	c_file = close(file_to);
	if (c_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);

}
