#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int is_ascii(int c);
int is_print(int c);

size_t ft_strlen(char* s);
void* ft_memset(void* b, int c, size_t len);
void ft_bzero(void* s, size_t len);


#endif