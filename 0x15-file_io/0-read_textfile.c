#include "main.h"

/**
 * read_textfile - Read text file and print it out to STDOUT
 * @filename: test file being read
 * @letters: number of letters read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf =  malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
