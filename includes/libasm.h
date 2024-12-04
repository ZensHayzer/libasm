#ifndef LIBASM_H
# define LIBASM_H
	#include <stdio.h>
	#include <errno.h>
	#include <stdlib.h>

	size_t ft_strlen(const char *str);
	char* ft_strcpy(char * dest, const char *str);
	int ft_strcmp(const char *str, const char* str1);
	size_t ft_write(int fd, const void * buf, size_t len);
	size_t ft_read(int fd, void *buf, size_t count);
	char *ft_strdup(const char *s);
#endif
