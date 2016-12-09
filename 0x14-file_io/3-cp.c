#include "holberton.h"

/**
 * main - copy contents of a file to another file
 * @argc: agrument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, rfd, wfd, cfd;
	char buf[BUFFERSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rfd = open(argv[1], O_RDONLY);
	if (rfd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (wfd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	i = 1;
	while (i)
	{
		i = read(rfd, buf, BUFFERSIZE);
		if (i == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
		if (i > 0)
		{
			cfd = write(wfd, buf, i);
			if (cfd == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	cfd = close(rfd);
	if (cfd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rfd), exit(100);
	cfd = close(wfd);
	if (cfd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wfd), exit(100);
	return (0);
}
