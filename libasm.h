#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

size_t  ft_strlen(char *a);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strdup(char *src);
size_t  ft_write(int fd, char *buf, size_t n);
size_t  ft_read(int fd, char *buf, size_t n); 
# endif