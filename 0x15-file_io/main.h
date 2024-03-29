#ifndef __MAIN_H__
#define __MAIN_H__


#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>


int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
