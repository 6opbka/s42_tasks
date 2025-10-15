#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize){
    size_t len = ft_strlen(src);
    if(dstsize>=(len+1)){
        ft_memcpy(dst,src,len+1);
    }
    else if(dstsize!=0){
        ft_memcpy(dst,src,dstsize-1);
        dst[dstsize-1]=0;
    }
    return len;
}