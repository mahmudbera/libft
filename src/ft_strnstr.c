#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t len)
{
    size_t  i;
    size_t  j;

    if(!*find)
        return s;
    i = 0;
    while(i < len && s[i] != '\0')
    {
        j = 0;
        while (find[j] != '\0' && s[i + j] == find[j])
        {
            j++;
        }
        if (!find[j])
            return &s[i];
    }
    return NULL;
}