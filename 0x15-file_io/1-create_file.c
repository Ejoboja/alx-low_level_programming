#include "main.h"

/**
* create_file - Create a new file or overwrite an existing file.
* @filename: The name of the file to be created or overwritten.
* @text_content: The content to be written to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;            /*File descriptor for the new file.*/
	int nletters;      /*Number of letters in the text_content.*/
	int rwr;           /*Number of letters written to the file.*/

	if (!filename)
	return (-1);    /*Return -1 if the filename is not provided.*/

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);    /*Return -1 if file creation or opening fails.*/

	if (!text_content)
	text_content = "";  /*Set text_content to an empty string if not provided.*/

	for (nletters = 0; text_content[nletters]; nletters++)
	;  /*Calculate the number of letters in text_content.*/

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
	return (-1);    /*Return -1 if the write operation fails.*/

	close(fd);   /*Close the file.*/

	return (1);   /*Return 1 to indicate success.*/
}

