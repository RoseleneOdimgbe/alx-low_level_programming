#include "main.h"


/**
 * read_textfile - this reads a text file and prints the letters
 * @filename: this is the pointer to the text in a file
 * @letters: the numbers of letters printed
 * Return: numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);

}
