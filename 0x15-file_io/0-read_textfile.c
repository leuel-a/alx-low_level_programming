#include "main.h"

/**
 * read_textfile - reads the content of a file and prints to
 * the POSIX output
 * @filename: the file to be read
 * @letters: the number of letters it should print
 *
 * Return: On success, it returns the actual letters it could
 * read and print. On error, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount = 0, wcount = 0;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		close(fd);
		return (0);
	}
	rcount = read(fd, buff, letters);
	if (rcount == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	wcount = write(STDIN_FILENO, buff, rcount);
	if (wcount == -1 || wcount != rcount)
	{
		close(fd);
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (wcount);
}
