#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

int open_file(char *file_name, char * read_mode);

int close_file(FILE *file);

char * read_line_of_file(FILE *file);

#endif // FILE_H_INCLUDED
