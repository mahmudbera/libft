#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ptr;
    size_t  temp;

    if (!s || !f)
        return (NULL);
    temp = ft_strlen(s);
    ptr = (char *)malloc(temp + 1);
    if (!ptr)
        return (NULL);
    temp = 0;
    while (s[temp])
    {
        ptr[temp] = f(temp, s[temp]);
        temp++;
    }
    return (ptr);
}