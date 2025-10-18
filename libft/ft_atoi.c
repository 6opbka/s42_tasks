#include "libft.h"

int ft_atoi(const char *str){
    int res = 0;
    int sign = 1;
    int i = 0;

    while(ft_isspace(str[i])) i++;

    if(str[i]=='+' && str[i+1] != '-'){
        i++;
    }

    if(str[i] == '-'){
        sign = -1;
        i++;
    }

    while(str[i] && str[i] >= 48 && str[i] <=57){
        res *=10;
        res+=str[i]-48;
        i++;
    }
    res*=sign;
    return res;
}

int    ft_isspace(int c)
{
    if ((c>=9&&c<=13) || c == 32)
        return (1);
    return (0);
}