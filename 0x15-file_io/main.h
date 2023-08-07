#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Function to output a single character */
int _putchar(char c);

/* Function to read a specified number of letters from a text file */
ssize_t read_textfile(const char *filename, size_t letters);

/* Function to create a new file with the provided text content */
int create_file(const char *filename, char *text_content);

/* Function to append text content to an existing file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
