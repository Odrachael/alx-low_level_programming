#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: File to read
 * @letters: this is the number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt;
	char *buf;
	ssize_t txtread, txtwrite;

	if (filename == NULL)
	return (0);

	txt = open(filename, O_RDONLY);
	if (txt == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(txt);
		return (0);
	}

	txtread = read(txt, buf, letters);
	close(txt);

	if (txtread == -1)
	{
		free(buf);
		return (0);
	}

	txtwrite = write(STDOUT_FILENO, buf, txtread);
	free(buf);

	if (txtwrite != txtread)
		return (0);

	return (txtwrite);
}
