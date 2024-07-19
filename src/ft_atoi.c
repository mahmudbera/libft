#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;

    i = 0;
    while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
        i++;
    sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }else if (str[i] == '+')
        i++;  
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}