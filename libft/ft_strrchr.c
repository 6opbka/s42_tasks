#include "libft.h"

char* ft_strrchr(const char *s, int c){
    size_t i = 0;
    char* res = NULL;

    while(s[i]){
        if(s[i]==(char)c){
            res = (char*) &s[i];
        }
        i++;
    }
    if(s[i]==c){
        res = (char*) &s[i];
    }

    return res;
}