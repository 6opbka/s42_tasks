#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    unsigned char* tmp_dst = (unsigned char*) dst;
    unsigned char* tmp_src = (unsigned char*) src;

    size_t i = 0;
    if(!dst&&!src){
        return NULL;
    }
    if(tmp_dst>tmp_src){
        while (len-->0)
        {
            tmp_dst[len] = tmp_src[len];
        }
    }
    else{
        while (i++ < len)
        {
            tmp_dst[i]=tmp_src[i];
        }
    }
    return dst;
}