#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t i;
    size_t p_size;

    p_size = count * size;
    ptr = (char *) malloc(p_size);
    if (ptr == NULL)
        return NULL;
    i = 0;
    while (i < p_size)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}