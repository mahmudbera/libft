#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i;
    size_t str_len;

    str_len = ft_strlen(s);
    if(!s)
        return NULL;
    if(str_len <= start)
        return NULL;
    if(str_len < start + len)
        len = str_len - start;
    ptr = (char *)malloc(len + 1);
    if(ptr == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}