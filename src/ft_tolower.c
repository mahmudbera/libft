#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'A')
        return (c += 32);
    else
        return (c);
}