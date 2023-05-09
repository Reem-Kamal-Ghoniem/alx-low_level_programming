#include "main.h"
#include <string.h>
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Retuen: int
 */
int create_file(const char *filename, char *text_content)
{
	int file, file1, i = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
		file1 = write(file, text_content, i);
	if (file1 == -1)
		return (-1);

	close(file);
	return (1);
}
