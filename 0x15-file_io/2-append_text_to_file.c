#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(file, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(file);
	return (-1);
}
