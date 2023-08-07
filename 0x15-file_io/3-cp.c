#include "main.h"
#include <stdio.h>

char *creating_buffer(char *file);
void closing_file(int fd);

/**
 * creating_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *creating_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}
/**
 * closing_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void closing_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int form, into, reading, writing;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = creating_buffer(argv[2]);
	form = open(argv[1], O_RDONLY);
	reading = read(form, buffer, 1024);
	into = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	do {
		if (form == -1 || reading == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(99);
		}

		writing = write(into, buffer, reading);
		if (into == -1 || writing == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reading = read(form, buffer, 1024);
		into = open(argv[2], O_WRONLY | O_APPEND);
	} while (reading > 0);

	free(buffer);
	closing_file(form);
	closing_file(into);

	return (0);
}
