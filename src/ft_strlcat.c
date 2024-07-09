#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  lendst;
    size_t  lensrc;
    size_t  index;

    lendst = 0;
    while (dst[lendst])
        lendst++;
    lensrc = 0;
    index = lendst;
    while (src[lensrc] && lensrc < size - lendst - 1)
        dst[index++] = src[lensrc++];
    dst[index] = '\0';
    while (src[lensrc])
        lensrc++;
    return (lensrc + lendst);
}