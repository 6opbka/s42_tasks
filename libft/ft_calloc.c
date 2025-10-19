#include "libft.h"

void* ft_calloc(size_t count, size_t size){
    unsigned char* tmp;
    tmp = malloc(count*size);
    if(!tmp) return NULL;
    int i = 0;
    while(i<count*size){
        tmp[i] = 0;
        i++;
    }
    return tmp;
}