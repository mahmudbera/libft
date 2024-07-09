#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int index;

    index = 0;
    if (dstsize != 0)
    {
        while (src[index] && index < dstsize - 1)
        {
            dst[index] = src[index];
            index++;
        }
    }
    if (index < dstsize)
        dst[index] = '\0';
    while (src[index])
        index++;
    return (index);
}