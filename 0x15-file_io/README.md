This is the READMD.md for "File I/O"

Task 0:
Create a function that reads a text file and prints it to the POSIX standard output.

ssize_t read_textfile(const char *filename, size_t letters);

Task 1:
Create a function that creates a file.

int create_file(const char *filename, char *text_content);

Task 2:
Write a function that appends text at the end of a file.

int append_text_to_file(const char *filename, char *text_content);

Task 3:
Write a program that copies the content of a file to another file.
Usage: cp file_from file_to

Task 4 (Advanced):
Write a program that displays the information contained in the ELF header at the start of an ELF file.
Usage: elf_header elf_filename
