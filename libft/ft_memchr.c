#include "libft.h"

void* ft_memchr(const void *s, int c, size_t n){
    unsigned char c_tmp = (unsigned char) c;
    unsigned char* s_tmp = (unsigned char*)s;
    int i = 0;
    while(i!=n){
        if(c_tmp == s_tmp[i]){
            return (void*)&s_tmp[i]; 
        }
        i++;
    }
    return NULL;
}