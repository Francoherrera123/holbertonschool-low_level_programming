#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0;
	char *buf;

	if (!*filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);

	read(fd, buf, letters);
	while (buf[count])
		count++;
	write(STDOUT_FILENO, buf, count);

	close(fd);
	return (count);

}
