#include "libft.h"

char *ft_itoa(int n)
{
    int temp;
    int length;
    int negative;
    char *ptr;

    temp = n;
    length = 0;
    if (n < 0)
    {
        n = -n;
        negative = 1;
        length++;
    }
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }
    ptr = (char *)malloc(length + 1);
    if (ptr == NULL)
        return (NULL);
    ptr[length] = '\0';
    while (n != 0)
    {
        ptr[--length] = (n % 10) + '0';
        n /= 10;
    }
    if(negative)
        ptr[0] = '-';
    return (ptr);
}