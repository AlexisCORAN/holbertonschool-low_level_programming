#include "holberton.h"
/**
* read_textfile - function that reads a text file and prints it
*		to the POSIX standard output.
*
*@filename: is a text file.
*
*@letters: letters is the number of letters it should read and print.
*
*Return: the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_file = read(fd, buffer, letters);

	if (read_file == -1)
	{
		free(buffer);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (read_file != write_file || write_file == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_file);
}
