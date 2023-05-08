#include "main.h"
/**
*read_textfile - a function that reads a text file
*and prints it to the POSIX standard output.
*@filename: name of the file
*@letters: letters is the number of letters it should read and print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file1, file2, file3;
	char *c;

	c = malloc(letters);
	if (c ==  NULL)
		return (0);

	file1 = open("filename", O_RDONLY);
	file2 = read(file1, c, letters);
	file3 = write(1, c, letters);

	if (file1 == -1 || file2 == -1 || file3 == -1 || file3 != file2)
	{
		free(c);
		return (0);
	}

	free(c);
	close(file1);
}
