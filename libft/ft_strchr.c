#include "libft.h"
char* ft_strchr(const char *s, int c){
    size_t i = 0;
    char cc = (char) c;

    while(s[i]){
        if(s[i] == c){
            return (char*) &s[i];
        }
        i++;
    }
    if(s[i] == cc){
        return (char*) &s[i];
    }
    
    return NULL;
}