#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  * @argc: argument number
  * @argv: pointer to argument
  * Return: int
  */
int main(int argc, char *argv[])
{
	int from, to, read_from = 1, write_to;
	char buf[BUFSIZ];
	mode_t Permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, Permissions);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (read_from)
	{
		read_from = read(from, buf, BUFSIZE);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_to = write(to, buf, read_from);
		if (write_to != read_from || write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}

