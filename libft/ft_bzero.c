#include "libft.h"

void ft_bzero(void* s, size_t len){
    char* tmp_ptr = (char*) s;
    while(len>0){
        *(tmp_ptr++) = 0;
        len--;
    }
}