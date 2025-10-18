#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){

    unsigned char* s1_tmp = (unsigned char*) s1;
    unsigned char* s2_tmp = (unsigned char*) s2;

    while((*s1_tmp || *s2_tmp)&&n>0){
        if(*s1_tmp != *s2_tmp){
            return *s2_tmp-*s1_tmp;
        }
        s1_tmp++;
        s2_tmp++;
        n--;
    }
    return 0;
}