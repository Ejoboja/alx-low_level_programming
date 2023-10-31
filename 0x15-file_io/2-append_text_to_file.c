#include "main.h"

/**
* append_text_to_file - Appends text to the end of an existing file.
* @filename: The name of the file to append text to.
* @text_content: The text content to be added to the file.
*
* Return: 1 if the file exists and the operation succeeds. -1 if the file
* does not exist or if the operation fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;            /*File descriptor for the file to append to.*/
	int nletters;      /*Number of letters in the text_content.*/
	int rwr;           /*Number of letters written to the file.*/

	if (!filename)
	return (-1);    /*Return -1 if the filename is not provided.*/

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);    /*Return -1 if the file cannot be opened or created.*/

	if (text_content)
	{
	for (nletters = 0; text_content[nletters]; nletters++)
	;  /*Calculate the number of letters in text_content.*/

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
	return (-1);  /*Return -1 if the write operation fails.*/
	}

	close(fd);   /*Close the file.*/

	return (1);   /*Return 1 to indicate success.*/
}
