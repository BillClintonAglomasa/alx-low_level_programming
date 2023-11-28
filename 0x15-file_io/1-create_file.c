#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: Filename.
 * @text_content: Content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int bytes_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	bytes_written = write(fd, text_content, num_letters);

	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
