#include "main.h"

/**
 * read_textfile - Reads a text file and prints to stdouput
 *
 * @filename: Filename.
 * @letters: Numbers of letters printed.
 *
 * Return: Numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *heap_memory = NULL;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	heap_memory = malloc(sizeof(char) * (letters));
	if (heap_memory == NULL)
		return (0);

	bytes_read = read(fd, heap_memory, letters);
	bytes_written = write(STDOUT_FILENO, heap_memory, bytes_read);

	close(fd);

	free(heap_memory);
	
	return (bytes_written);
}
