#include <unistd.h>
#include <fcnlt.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file.
 * @text_content: text to write.
 * Return: 1 on success 0 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWSUR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
