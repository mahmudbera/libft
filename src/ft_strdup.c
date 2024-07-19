#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len;
    char *ptr;

    if(s == NULL)   return NULL;
    len = ft_strlen(s);
    ptr = (char *)malloc(len + 1);
    ft_memcpy(ptr, s, len);
    ptr[len + 1] = '\0';
    return (ptr);
}