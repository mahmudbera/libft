#include "libft.h"

void *ft_memset(void *dest, int c, size_t count)
{
    unsigned char   *p;

    p = (unsigned char *) dest;
    while(count-- > 0)
        *p++ = (unsigned char)c;
    return (p);
}