#include "holberton.h"

/**
*create_file - function that creates a file.
*
*@filename: name of the file.
*
*@text_content: content for the file.
*
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, file_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
		file_write = write(fd, text_content, _strlen(text_content));

	if (fd == -1 || file_write == -1)
		return (-1);

	close(fd);
	return (1);
}


/**
* _strlen - Returns the length of a string
*
*@s: pointer to a string.
*
*Return: length of a string.
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);

}
