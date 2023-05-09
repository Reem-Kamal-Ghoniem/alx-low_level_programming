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
	char buf[1024];

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
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (read_from)
	{
		read_from = read(from, buf, 1024);
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
