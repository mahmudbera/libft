#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t length)
{
    size_t              i;
    unsigned char       *destTemp;
    const unsigned char *srcTemp;

    if(!dest && !src)
        return (0);
    i = 0;
    destTemp = (unsigned char *) dest;
    srcTemp = (const unsigned char *) src;
    while (i < length)
    {
        *(destTemp + i) = *(srcTemp + i);
        i++;
    }
    return (destTemp);
}