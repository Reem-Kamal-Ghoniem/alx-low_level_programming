#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, file1, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_APPEND, 0600);
	if (file == -1)
		return (-1);
	file1 = write(file, text_content, i);
	if (file1 == -1)
		return (-1);

	close(file);
	return (1);
}
