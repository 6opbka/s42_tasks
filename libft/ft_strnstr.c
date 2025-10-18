#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
    if(needle[0]==0) return (char*)haystack;
    size_t i = 0;
    size_t j = 0;
    while (haystack[i]&&i<len)
    {   
        while(haystack[i+j]==needle[j]){
            if(haystack[i+j]&&i+j<len){
                j++;
            }
            if(needle[j]==0)
                return((char*)haystack+i);
        }
        i++;
        j=0;
    }
    return 0;
    
}