#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Filename.
 * @text_content: Added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		bytes_written = write(fd, text_content, num_letters);

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
