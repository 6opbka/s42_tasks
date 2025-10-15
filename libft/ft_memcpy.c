#include "libft.h"

void* ft_memcpy(void* dst, const void* src, size_t n){
    unsigned char* tmp_dst = (unsigned char*) dst;
    unsigned char* tmp_src = (unsigned char*) src;

    if(dst==(void*)0 && src==(void*)0){
        return dst;
    }

    while(n>0){
        *(tmp_dst++) = *(tmp_src++);
        n--;  
    }
    return dst;
}